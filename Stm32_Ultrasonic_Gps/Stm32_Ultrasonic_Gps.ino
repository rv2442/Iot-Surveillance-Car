//SENDER CODE
#define echoPin PB1 // attach pin B1 STM32 Bluepill to pin Echo of HC-SR04
#define trigPin PB0 //attach pin B0 STM32 Bluepill to pin Trig of HC-SR04
#include <TinyGPS++.h>
long lat, lon;
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
HardwareSerial Serial2(USART2);
HardwareSerial Serial3(USART3);
TinyGPSPlus gps;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  while(!Serial){}
  Serial2.begin(9600);
  while(!Serial2){}  //time to start serial2
  Serial3.begin(9600);
  while(!Serial3){}
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  //Serial.print("Distance: ");
  if (Serial3.available())     // check for gps data
  { 
    if (gps.encode(Serial3.read()))   // encode gps data
    { 
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
