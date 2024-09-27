#include <Arduino.h>
#ifdef ESP32
#include <WiFi.h>
#else
#include <ESP8266WiFi.h>
#endif
#include <ArduinoUniqueID.h>


void setup() {
    Serial.begin(115200);
    Serial.println();
}

void loop() {
    Serial.print("ESP Board MAC Address:  ");
    Serial.println(WiFi.macAddress());
    delay(2000);
    Serial.print("UniqueID: ");
    for (size_t i = 0; i < UniqueIDsize; i++) {
        Serial.print(UniqueID[i], HEX);
    }
    Serial.println();
    delay(5000);
}
