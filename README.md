# Iot-Surveillance-Car
This is a IOT Surveillance Car which can be controlled, monitored and, tracked globally. The camera on the front of the car can also be monitored globally. It can go anywhere where sim connection is available.

### Problem Statement
* To make a Surveillance Car which can be controlled and monitored globally, be tracked by using GPS.  

### Hardware Requirements:

>1. Wi-Fi module (ESP32 Cam)
>2. STM32 BluePill (F103c8)
>3. ESP8266 (NodeMCU)
>4. L298N Motor Driver
>5. 4 Motors (CW + ACW)
>6. Servo Motor (MG995)
>6. Ultrasonic Sensor (HC-SR04)
>7. GPS module (Neo 6m)

### Software Platform  
>* Arduino IDE  

### Cloud Platforms
>* Microsoft Azure  (Iaas)
>* Arduino IoT Cloud (Paas)

### Block Diagram
#### Lower Level
![image](https://user-images.githubusercontent.com/69571769/176467277-a61dbe8f-7546-42e7-8a08-915f85412f64.png)


### Middle Level
__This Level Consists of Batteries that power the car namely:__  
1. 12V Battery to power the 4 motors of the car and the Servo motor.  
2. 5V Battery to power Esp32Cam.  
3. 5V Battery to power Esp8266 and Stm32f103c8  
>__Note:__  
>Such high power requirement is needed due to the absence of an rtos.


#### Upper Level
![image](https://user-images.githubusercontent.com/69571769/176467393-daac9e7f-8ff1-45e1-9092-945462fc6a75.png)




### Demo
[![image](https://user-images.githubusercontent.com/69571769/176464994-540e844e-b07d-430b-b1c3-4bac1013bd54.png)](https://youtu.be/gbrepEZ59LY)
_______________________________________________________________________________________________________________________________________________________________________

* Credits to [ThatProject](https://github.com/0015) for [Esp32Cam_Websocket](https://github.com/rv2442/Iot-Surveillance-Car/blob/main/Esp32Cam_Websocket/Esp32Cam_Websocket.ino)

## License
Code and Media are under the respective Licenses:  
* [MIT](https://opensource.org/licenses/MIT)  
* [Creative Commons Zero v1.0 Universal](https://creativecommons.org/publicdomain/zero/1.0/)  

_______________________________________________________________________________________________________________________________________________________________________

## Step By Step [Guide](https://github.com/rv2442/Iot-Surveillance-Car/blob/main/LEARN.md#step-by-step-guide-on-building-this-project) For Building This Project
## [References](https://github.com/rv2442/Iot-Surveillance-Car/blob/main/LEARN.md#references-if-used-will-help-in-better-understanding)

#### If you require further assistance, you can contact us at:
<li><a href="https://www.linkedin.com/in/rahulv24/">Rahul Vijan</a></li>  
<li><a href="https://www.linkedin.com/in/aditya-waichol/">Aditya Waichol</a></li>  
<li><a href="https://www.linkedin.com/in/abhishek-singh-bb87951a4/">Abhishek Singh</a></li>  
