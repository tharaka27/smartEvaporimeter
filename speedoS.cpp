 
#include <math.h>
#include "speedoS.h"

 float p ;  
 float a0 ;
 float a1 ;
 float a2 ;
 float a3 ;
 float a4 ;
 float a5 ;
 float a6 ;       
 float a7 ;         
 float a8 ;     
 float a9 ;
 float a10 ;
 float a11 ;  
 float a12 ;
 float a13 ; 
 float a14 ;
 float a15 ;
 float T ;
 float h ;
 float f ;
 float Psv ;
 float Xw;
 float c ;
 float Xc;
 float temperature;
 float humidity;

speedoS::speedoS(void)
{
 
 p = 101000;  
 a0 = 331.5024;
 a1 = 0.603055;
 a2 = -0.000528;
 a3 = 51.471935;
 a4 = 0.1495874;
 a5 = -0.000782;
 a6 = -1.82e-7;       
 a7 = 3.73e-8;         
 a8 = -2.93e-10;     
 a9 = -85.20931;
 a10 = -0.228525;
 a11 = 5.91e-5;  
 a12 = -2.835149;
 a13 = -2.15e-13; 
 a14 = 29.179762;
 a15 = 0.000486;


}



float speedoS::getSpeed(float humidity, float temperature ){
  T = temperature + 273.15;
  h = humidity /100.0;
  f = 1.00062 + 0.0000000314 * p + 0.00000056 * temperature * temperature;
  Psv = exp(0.000012811805 * T * T - 0.019509874 * T + 34.04926034 - 6353.6311 / T);
  Xw = h * f * Psv / p;
  c = 331.45 - a0 - p * a6 - a13 * p * p;
  c = sqrt(a9 * a9 + 4 * a14 * c);
  Xc = ((-1) * a9 - c) / ( 2 * a14);
  float speedOfSound = a0 + a1 * temperature + a2 * temperature * temperature + (a3 + a4 * temperature + a5 * temperature * temperature) * Xw + (a6 + a7 * temperature + a8 * temperature * temperature) * p + (a9 + a10 * temperature + a11 * temperature * temperature) * Xc + a12 * Xw * Xw + a13 * p * p + a14 * Xc * Xc + a15 * Xw * p * Xc;
  return speedOfSound;
}



 
