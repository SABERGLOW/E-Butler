#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>


#define FIREBASE_HOST "project-name-default-rtdb.firebaseio.com"   // Database URL
#define FIREBASE_AUTH "T0IlKAohfgPqWETnqcXeZcPN77E0mCnXPilUpWAW"       // the secret key generated from firebase Database Secrets

#define WIFI_SSID "Wifi_Name"                   // input your home or public wifi name 
#define WIFI_PASSWORD "Wifi_Password"             //password of wifi ssid


String fireStatus = "";
void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH); // HIGH is OFF

  // Connect to WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  if(Firebase.failed())
  {
    Serial.print(Firebase.error());
  }
  else{
  
    Serial.print("Firebase Connected");

  }
}

void loop() 
{

    //String path = "/LED/";
    //FirebaseObject object = Firebase.get(path);
    //Firebase.setString("LED_STATUS", "OFF"); 
    
    String LOCK = Firebase.getString("lock");
    //String UNLOCK = Firebase.getString("unlock");

    Serial.println("LOCK_STATUS: " + LOCK); 
    //Serial.println("UNLOCK_STATUS: " + UNLOCK); 

    if(LOCK == "1"){
      
      digitalWrite(2, LOW);
    }
    else if(LOCK == "0"){
      
        digitalWrite(2, HIGH);
    }
}