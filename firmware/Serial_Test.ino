/*
 * Project : Smart Safety Vest
 * Phase   : 01 - ESP32 Setup
 * File    : Serial_Test.ino
 * Author  : Ajoy Das Team
 * Description:
 * Test Serial Communication with ESP32.
 */

void setup()
{
    Serial.begin(115200);

    Serial.println("--------------------------------");
    Serial.println(" Smart Safety Vest Project");
    Serial.println(" Phase 01 - ESP32 Setup");
    Serial.println("--------------------------------");
}

void loop()
{
    Serial.println("ESP32 Working Successfully...");
    delay(1000);
}