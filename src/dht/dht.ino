#include "DHT.h"
#define DHTPIN D2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200); 
    dht.begin();
}

void loop() {
    float hum = dht.readHumidity();
    float temp = dht.readTemperature();
    if (isnan(hum) || isnan(temp)) { 
        Serial.println("Gagal Membaca DHT sensor!");
        return;
    }

    Serial.println("Temperature: " + (String)temp + " *C");
    Serial.println("Humidity: " + (String)hum + " %");
    delay(1000);
}