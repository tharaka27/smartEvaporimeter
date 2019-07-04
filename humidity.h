/*
   Written by Tharaka Sachintha Ratnayake

*/

// ensure this library description is only included once
#ifndef humidity_h
#define humidity_h

// include types & constants of Wiring core API
#include "DHT.h"


// library interface description
class humidity
{
  // user-accessible "public" interface
  public:
    humidity(void);
    float readHumidity(void);
    float readTemperature(void);
    float readTemperatureF(void);
    float computeHeatIndexF(float, float);
    float computeHeatIndex(float, float);

// library-accessible "private" interface
//   private:
//     int value;
//     void doSomethingSecret(void);

};

#endif
