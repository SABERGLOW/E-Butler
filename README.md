<h1 align="center">E-Butler</h1>
<p align="center">
    <img width="200" src="https://github.com/SABERGLOW/E-Butler/blob/main/ebutler-logo.png" alt="E-Butler logo">
</p>
<p align="center"> <em>Alfred ain't got shit on this ... </em></p>

#### Home Automation with NodeMCU-ESP8266-CP Module + Firebase + Google Assistant + Dialogflow + Android
<p>&nbsp;</p>
<p>&nbsp;</p>

# Overview 

This project is about different home automation features that you can implement using ESP8266 Module paired with Firebase and Google Assistant. As an example, I have implemented a door unlock demo in this project. The aim is to alert the user when the doorbell rings and enable him/her to unlock the door using Google Assisstant. The proect can be further developed to include Google Home integration, IFTTT, or whatever your heart may desire.

# Tech Stack

1. **PlatformIO**
   - Used to program NodeMCU-ESP8266-CP Module in C++. 
   - Dependencies: ArduinoJSON & Firebase Arduino
2. **Firebase**
   - Firebase Realtime Database
   - Firebase Functions: Google Assistant function + Android Push Notification function
3. **Dialogflow**
   - Used to integrate Google Assistant commands with our Firebase RTDB.

  ---
