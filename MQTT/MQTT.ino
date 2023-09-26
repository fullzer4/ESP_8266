
#include <ArduinoJson.h>
#include "EspMQTTClient.h"
#include <Wire.h>

EspMQTTClient client {
  "", // nome da rede
  "", // senha da rede
  "Default", // username
  "mqtt.tago.io", // mqtt broker server
  "", // token tago.io
  1883, // MQTT port
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
