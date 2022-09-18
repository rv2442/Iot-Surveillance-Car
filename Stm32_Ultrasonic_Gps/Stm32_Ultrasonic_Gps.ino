/*  
*   @fileName: Stm32_Ultrasonic_Gps
*   @author: Rahul Vijan, Aditya Waichol, Abhishek Singh
*   This file has logic for extracting data from HC-SR04(Ultrasonic), NEO6m(GPS) modules and transmitting it to ESP8266 Serially
*/  

#define echoPin PB1 /* attach pin B1 STM32 Bluepill to pin Echo of HC-SR04 */
#define trigPin PB0 /* attach pin B0 STM32 Bluepill to pin Trig of HC-SR04 */

/* Global Includes */
#include <TinyGPS++.h>

/* Global Variables */
long lat, lon;  /* latitude and longitude recieved from GPS */
long duration; /* variable for the duration of sound wave travel */
int distance; /* variable for the distance measurement */

/*
*   Hardware Serial 2 =>  Stm32f1c08 -> ESP8266   
*   Hardware Serial 3 =>  Stm32f1c08 <- GPS
*/
HardwareSerial Serial2(USART2);
HardwareSerial Serial3(USART3);
TinyGPSPlus gps;

/* Initialising */
void setup() {
  pinMode(trigPin, OUTPUT); /* Sets the trigPin as an OUTPUT */
  pinMode(echoPin, INPUT); /* Sets the echoPin as an INPUT */
  Serial.begin(9600);    /* Serial Communication is starting with 9600 of baudrate speed */
  while(!Serial){}      /* delay time to start serial1 */
  Serial2.begin(9600);
  while(!Serial2){}  /* delay time to start serial2 */
  Serial3.begin(9600);
  while(!Serial3){}  /* delay time to start serial3 */
}

void loop() {
  
  /* Clears the trigPin condition */
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  /* Sets the trigPin HIGH (ACTIVE) for 10 microseconds */
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  /* Reads the echoPin, returns the sound wave travel time in microseconds */
  duration = pulseIn(echoPin, HIGH);
  
  /* Calculating the distance */
  distance = duration * 0.034 / 2; /* Speed of sound wave divided by 2 (go and back) */
  
  if (Serial3.available())     /* check for gps data */
  { 
    if (gps.encode(Serial3.read()))   /* encode gps data */
    { 
      /* Serial communication with nodemcu in csv format */
      Serial2.print(gps.location.lat(), 6);
      Serial2.print(",");
      Serial.print(gps.location.lat(), 6);
      Serial.print(",");
      Serial2.print(gps.location.lng(), 6);
      Serial2.print(",");
      Serial2.print(distance);
      Serial2.println();
      Serial.print(gps.location.lng(), 6);
      Serial.print(",");
      Serial.print(distance);
      Serial.println();
    }
  }
}
