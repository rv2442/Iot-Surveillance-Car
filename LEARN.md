## References If used will help in Better Understanding
#### Programming Esp32 Cam using Arduino IDE
<li>
https://www.circuitschools.com/how-to-program-upload-the-code-to-esp32-cam-using-arduino-or-programmer/
</li>
<li>
https://randomnerdtutorials.com/program-upload-code-esp32-cam/
</li>  

#### Running WebCamServer on Esp32 Cam Locally
<li> https://randomnerdtutorials.com/esp32-cam-video-streaming-face-recognition-arduino-ide/ </li>

#### Running WebCamServer on Esp32 Cam Globally 
[![image](https://user-images.githubusercontent.com/69571769/199896852-2c2103b9-6e24-4129-8aff-66260954637c.png)](https://youtu.be/CpIkG9N5-JM)

#### Creating an Account on Azure
>NOTE: Some may say that you need .edu domain only but now GitHub, Azure accepts all student domains mine got accepted (.ac.in), if yours doesn't then contact GitHub Support and explain them that you are a student but your email was not accepted. They'll contact you in a few days with a code to use for a student's subscription

[![image](https://user-images.githubusercontent.com/69571769/199918571-9e9b4c04-fd5e-4fcf-8673-2ad10d2b9a97.png)](https://youtu.be/A1N-vhru3AU)

[![image](https://user-images.githubusercontent.com/69571769/199918302-79534004-e3ef-43e3-b79a-642b7d88834e.png)](https://youtu.be/rj1NOtkJ62A)



#### Activating Arduino Maker Subscription using GitHub Benefits
>Go to GitHub Benefits on https://education.github.com/pack

![image](https://user-images.githubusercontent.com/69571769/199925572-beb95d29-0224-4a9f-9323-91fa3918da75.png)

**Connect it to GitHub and Then Scroll down to claim free 6 month subscription**
![image](https://user-images.githubusercontent.com/69571769/199925700-5b7862aa-0819-4524-8a3e-2ed2223f9f2b.png)



#### Controlling Esp8266 using Arduino IoT Cloud
##### Beginner  
[![image](https://user-images.githubusercontent.com/69571769/199914163-0d87d692-b6bf-4ca3-9102-4ddf031e9283.png)](https://youtu.be/rcCxGcRwCVk)  

##### Intermediate 
[![image](https://user-images.githubusercontent.com/69571769/199913934-93c6902b-2a30-47c5-8eaf-ac444c3b1f84.png)](https://youtu.be/UFCmTZUoZ1M)    









## Step By Step Guide On Building This Project

### Uploading Code to Stm32f103c8 (Bluepill Board)
>Using this procedure one can upload Code to Stm32f103c8

[![image](https://user-images.githubusercontent.com/69571769/212711597-bde4eb2c-d69d-4f1b-a400-678a4107e09c.png)](https://youtu.be/fD1Bzf2iP_E)
<br>

[Resources Needed for Initial Configuration(Booting) Stm32f103c8](https://drive.google.com/drive/folders/1rds3LwTy7vHc3aOse2h950rR8QPTpMZX)
<br>

Once code is uploaded Connect Stm32f103c8 to Ultrasonic sensor(HC-SR04), GPS sensor(Neo-6m) and Esp8266

#### Pinout of Stm32f103c8  
>RX1,TX1 -> Hardware Serial 1  
>RX2,TX2 -> Hardware Serial 2  
>RX3,TX3 -> Hardware Serial 3  

![image](https://user-images.githubusercontent.com/69571769/212714675-f691a5f5-5311-4ffc-b745-5ac0949e578e.png)
<br><br>
![image](https://user-images.githubusercontent.com/69571769/212715323-f289d77c-42d3-4894-8b30-4715355731ca.png)



<br><br><br>



### Connecting ESP32 to Arduino IoT Cloud
<li>https://docs.arduino.cc/arduino-cloud/getting-started/esp-32-cloud</li>

>Using this same procedure one can connect Esp8266 and other Esp Boards to Arduino Iot Cloud 

[![image](https://user-images.githubusercontent.com/69571769/199896868-65d35dbe-0eda-4a77-996a-96472055abbf.png)](https://youtu.be/3Of8Cq7mY3U)
<br><br><br>







### Creating virtual variables for Esp8266
Once above step is done you would see get 1 thing on this page  
![image](https://user-images.githubusercontent.com/69571769/199907338-681d664d-3998-4536-94e8-25961a25b643.png)
<br><br><br>

**Click on the thing and start creating variables**  
![image](https://user-images.githubusercontent.com/69571769/199908107-54a64be6-df1b-4a9c-b8f0-1b7b217a5a5d.png)
<br><br><br>


__Set Permission and Update policy for variables:__  
**forward**   
![image](https://user-images.githubusercontent.com/69571769/199910340-112c4ba7-c3a7-44c8-898b-7036e341b121.png)
<br><br><br>

**backward**  
![image](https://user-images.githubusercontent.com/69571769/199908556-04051d64-b045-4b93-b5ba-c0e8e6fbd8ee.png)
<br><br><br>

**right**  
![image](https://user-images.githubusercontent.com/69571769/199911753-917b9283-275a-4cb6-8a64-5d781118a86b.png)
<br><br><br>

**left**   
![image](https://user-images.githubusercontent.com/69571769/199911902-f5efbd85-2fb5-4548-8d19-3280d3be0009.png)
<br><br><br>

**distance**  
![image](https://user-images.githubusercontent.com/69571769/199910482-b6fae696-5569-43ee-b542-469ff0e00493.png)
<br><br><br>

**gps**  
![image](https://user-images.githubusercontent.com/69571769/199910569-8695e93e-a2e6-4fb8-a1ec-8088c0efbba1.png)
<br><br><br>

**led**  
![image](https://user-images.githubusercontent.com/69571769/199912011-c1412c12-86f1-42f8-a9ad-d333d9631280.png)
<br><br><br>

**servo**  
![image](https://user-images.githubusercontent.com/69571769/199912156-d243e082-1afc-48c8-b144-42e1562a1aa0.png)
<br><br><br>

**motor**  
![image](https://user-images.githubusercontent.com/69571769/199912265-7e14752e-93c9-4706-9964-2b3910a4aa2c.png)
<br><br><br>









### Creating Dashboard and Connecting Virtual Variables  
![image](https://user-images.githubusercontent.com/69571769/199914657-388835b0-c465-4bdb-8201-813119b6db0e.png)
<br><br><br>

![image](https://user-images.githubusercontent.com/69571769/199914736-f7eb5037-4810-42f0-a73b-11757cf70fe3.png)
<br><br><br>

![image](https://user-images.githubusercontent.com/69571769/199915550-274137ca-1370-4a78-8787-be886863d405.png)
<br><br><br>

**Add the following widgets:**  
<li>1 Switch</li>
<li>4 Push Buttons</li>
<li>1 Map</li>
<li>1 Value</li>
<li>2 Slider</li>

<br><br><br>
#### Place them as shown below
<br>

![image](https://user-images.githubusercontent.com/69571769/199914891-e153632c-da71-45aa-8f1b-2c637589b272.png)
<br><br><br>

#### Connect Widgets to Virtual Variables 
**forward**   
![image](https://user-images.githubusercontent.com/69571769/199916254-6fa70275-3270-4618-8a1d-4e5a67ff7712.png)
<br><br><br>

**backward**  
![image](https://user-images.githubusercontent.com/69571769/199916450-6bdda4a4-72c1-4a81-9ed7-b1f0ae1bf37a.png)
<br><br><br>

**right**  
![image](https://user-images.githubusercontent.com/69571769/199916623-e8596709-7762-48c6-a5b9-b54a3c0cc5fa.png)
<br><br><br>

**left**   
![image](https://user-images.githubusercontent.com/69571769/199916774-c38bf92a-5eb0-4c3c-a31c-1778bae7a479.png)
<br><br><br>

**distance**  
![image](https://user-images.githubusercontent.com/69571769/199916844-69a089a8-a69c-403d-b507-b95a1ec496f0.png)
<br><br><br>

**gps**  
![image](https://user-images.githubusercontent.com/69571769/199916970-3dd6d3b3-849f-4db5-9860-a68d6a43d8fb.png)
<br><br><br>

**led**  
![image](https://user-images.githubusercontent.com/69571769/199917101-35ec06eb-196a-4364-aaea-96265f3282f8.png)
<br><br><br>

**servo** 
![image](https://user-images.githubusercontent.com/69571769/199917348-065eda5d-e35a-4800-93b3-1bd08e90d676.png)
<br><br><br>

**motor**  
![image](https://user-images.githubusercontent.com/69571769/199917419-04027c7f-ad8e-49bc-abb7-51d8cd079d84.png)
<br><br><br>







### Creating a VM on Azure
**Login on Azure and go to Virtual Machines**  

![image](https://user-images.githubusercontent.com/69571769/199919261-16b7fc81-0689-4e4c-ba94-625668e38acc.png)
<br><br><br>

**Video Tutorial**  
[![image](https://user-images.githubusercontent.com/69571769/199919727-c8b3e05f-d770-49f6-8c48-8fb8805f8346.png)](https://youtu.be/QOv_-xBXkpo)
<br><br><br>

#### Once Machine is created open Ports on it to use Websockets for the Camera Stream
**Go to Networking**  
![image](https://user-images.githubusercontent.com/69571769/199920356-dee40196-ddde-4075-bea2-3c887cbec3ed.png)
<br><br><br>

![image](https://user-images.githubusercontent.com/69571769/199920657-7a283f15-1d20-4777-b2e0-70150f912e03.png)
<br><br><br>

**Add**  
![image](https://user-images.githubusercontent.com/69571769/199921277-37430756-8548-44b7-8e95-f32e18287f11.png)
<br><br><br>


**Open the same port for OutBound Connection**  
![image](https://user-images.githubusercontent.com/69571769/199922161-18a5ccad-c407-44e3-95b8-96df962cfbe5.png)
<br><br><br>

**Add**  
![image](https://user-images.githubusercontent.com/69571769/199922472-6a40f9f0-839b-4c04-a72f-56d71d01e555.png)
<br><br><br>


**Using Above Steps You can create more a secure rule than mine, like accepting from a specific IP only (but I chose not to as this is just prototyping for a personal project**  

#### Follow this next on Your VM 
>NOTE: In the Video the VM is made on GCP we made the same thing on Azure, follow the same steps as showed in the video after this the stream should show in the "\<PublicIPofVM\>/client" url

[![image](https://user-images.githubusercontent.com/69571769/199896852-2c2103b9-6e24-4129-8aff-66260954637c.png)](https://youtu.be/CpIkG9N5-JM)
<br><br><br>

**Once done now upload code to ESP8266 to Control Car**

**Go to Sketch**  
![image](https://user-images.githubusercontent.com/69571769/199924305-843ff3ab-5d79-42be-8006-315fe5d2ecee.png)
<br><br><br>

**Install Arduino Create Agent**  
![image](https://user-images.githubusercontent.com/69571769/199924468-e83799c9-aa95-403e-93f5-78dd58a7ba98.png)
<br><br><br>

**Click on Learn More then Download**  
![image](https://user-images.githubusercontent.com/69571769/199924524-77c04c03-6bc7-4ebf-aed7-9c2d4ebf6ae9.png)

**Copy Paste the code from my github repo Arduino_iot_cloud_Nodemcu and upload the sketch to your nodemcu**  
>NOTE: To burn code use [these](https://github.com/rv2442/Iot-Surveillance-Car/edit/main/LEARN.md#controlling-esp8266-using-arduino-iot-cloud) videos as reference   

#### THE CAR MUST FUNCTION NOW PROVIDED YOU FOLLOWED ALL STEPS PROPERLY
>The Connections of GPS, Ultrasonic, STM32, Esp8266 have been shown [here](https://github.com/rv2442/Iot-Surveillance-Car/blob/main/README.md#Upper-Level)  
>How to Use [H-Bridge L298N](https://dronebotworkshop.com/dc-motors-l298n-h-bridge/)
>Esp8266 Connections: 
![Iot-Car Ckt Connections](https://user-images.githubusercontent.com/69571769/212732791-2a6b5cab-c8ed-422e-9123-7e09fb920b91.png)


