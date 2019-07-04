 #include "humidity.h"

#define DHTPIN 2     
#define DHTTYPE DHT11   

DHT dht(DHTPIN, DHTTYPE);

humidity::humidity(void)
{
  dht.begin();
}



float humidity::readHumidity(void){
  float h = dht.readHumidity();
  delay(500);
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
  }
  return h;
}

float humidity::readTemperature(void){
  float h = dht.readTemperature();
  delay(500);
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
  }
  return h;
}

float humidity::readTemperatureF(void){
  float h = dht.readTemperature(true);
  delay(500);
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
  }
  return h;
}


float humidity::computeHeatIndexF(float f, float h){
  float hif = dht.computeHeatIndex(f, h);
  delay(500);
  if (isnan(hif)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
  }
  return hif ;
}

float humidity::computeHeatIndex(float f, float h){
  float hit = dht.computeHeatIndex(f, h, false);
  delay(500);
  if (isnan(hit)) {
    Serial.println("Failed to read from DHT sensor!");
    return 0;
  }
  return hit ;
}
