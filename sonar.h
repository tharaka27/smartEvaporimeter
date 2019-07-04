/*
   Written by Tharaka Sachintha Ratnayake

*/

// ensure this library description is only included once
#ifndef sonar_h
#define sonar_h

// include types & constants of Wiring core API

// library interface description
class sonar
{
  // user-accessible "public" interface
  public:
    sonar(void);
    float getDistance(int , int, float);

//library-accessible "private" interface
//   private:
//     int value;
//     void doSomethingSecret(void);

};

#endif