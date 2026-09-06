#include <Arduino.h>

const int LED_PIN = 2;

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
    
    Serial.println("Gõ '1' để bật LED, '0' để tắt LED");
}

void loop() {
    if (Serial.available() > 0) {
        char command = Serial.read();
        
        if (command == '1') {
            digitalWrite(LED_PIN, HIGH);
            Serial.println("LED ON");
        } 
        else if (command == '0') {
            digitalWrite(LED_PIN, LOW);
            Serial.println("LED OFF");
        }
    }
}