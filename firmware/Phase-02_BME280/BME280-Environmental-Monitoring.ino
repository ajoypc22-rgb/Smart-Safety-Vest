#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme;

void setup() {
  Serial.begin(115200);
  Serial.println("Smart Safety Vest");
  Serial.println("Phase 02 - BME280 Test");

  bool status = bme.begin(0x76);

  if (!status) {
    Serial.println("BME280 not found at address 0x76");
    Serial.println("Trying address 0x77...");

    status = bme.begin(0x77);

    if (!status) {
      Serial.println("ERROR: BME280 Sensor Not Detected!");
      while (1);
    }
  }

  Serial.println("BME280 Sensor Detected Successfully!");
}

void loop() {

  Serial.print("Temperature : ");
  Serial.print(bme.readTemperature());
  Serial.println(" °C");

  Serial.print("Humidity    : ");
  Serial.print(bme.readHumidity());
  Serial.println(" %");

  Serial.print("Pressure    : ");
  Serial.print(bme.readPressure() / 100.0F);
  Serial.println(" hPa");

  Serial.println("-----------------------------");

  delay(2000);
}