#include "humidity.h"
#include "speedoS.h"
#include "sonar.h"

humidity humiditySensor;
speedoS s;
sonar sensor1;
sonar sensor2;

void setup(){
  Serial.begin(9600);
  Serial.println("DHTxx test!");

}

void loop(){

  float h  = humiditySensor.readHumidity();
  float t  = humiditySensor.readTemperature();
  float f  = humiditySensor.readTemperatureF();
  //float hif = humiditySensor.computeHeatIndexF(f,h);
  //float hic = humiditySensor.computeHeatIndex(t, h);
  float speeds = s.getSpeed(h,t);
  float distance  = sensor1.getDistance(9, 10 , speeds);
  float distance2  = sensor2.getDistance(11, 12 , speeds);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print(speeds);
  Serial.print("\t distance ");
  Serial.print(distance);
  Serial.print("\t distance2 ");
  Serial.print(distance2);
  Serial.println();

}
