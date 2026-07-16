/*
 * Project : Smart Safety Vest
 * Phase   : 01 - ESP32 Setup
 * File    : ESP32_Blink.ino
 * Author  : Ajoy Das Team
 * Description:
 * Blink the onboard LED every 1 second to verify ESP32 operation.
 */

#define LED_PIN 2

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);

    digitalWrite(LED_PIN, LOW);
    delay(1000);
}