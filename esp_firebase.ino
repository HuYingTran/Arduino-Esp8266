#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#include <ArduinoJson.h>

// Set these to run example.
#define FIREBASE_HOST "qtfirebaseintegrationexa-942c6-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "VL316DNkgpysG9g46LgH7SjbBeBTdlGljufQDJ1A"
#define WIFI_SSID "Huynh Tran"
#define WIFI_PASSWORD "12345678"

FirebaseData firebaseData;

dfjghfdjgnfgjndfj
void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
}

int n = 0;

void loop() {
  Firebase.setString(firebaseData,"RealTimeSmartHome/Gas","111");
  if(Firebase.getString(firebaseData,"RealTimeSmartHome/Gas")){
    String s = firebaseData.stringData();
    delay(200);
    Firebase.setString(firebaseData,"RealTimeSmartHome/Door",s);
    Serial.print(s);
  }
}
