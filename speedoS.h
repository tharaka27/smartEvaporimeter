/*
   Written by Tharaka Sachintha Ratnayake

*/

// ensure this library description is only included once
#ifndef speedoS_h
#define speedoS_h

// include types & constants of Wiring core API


// library interface description
class speedoS
{
  // user-accessible "public" interface
  public:
    speedoS(void );
    float getSpeed(float ,float);

// library-accessible "private" interface
//   private:
//     int value;
//     void doSomethingSecret(void);

};

#endif
