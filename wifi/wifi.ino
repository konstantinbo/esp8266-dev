#include <ESP8266WiFi.h>
#include <WiFiManager.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFiManager wifiManager;
  wifiManager.autoConnect();

}

void loop() {
  // put your main code here, to run repeatedly:

}
