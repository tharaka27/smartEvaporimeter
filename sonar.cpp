#include "sonar.h"
#include "Arduino.h"


float duration;
float distance;
int trigPin;
int echoPin;

sonar::sonar()
{   

}



float sonar::getDistance(int t , int e, float speedOfSound){

    trigPin = t;
    echoPin = e;
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 

    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

    // Calculating the distance
    distance= duration * speedOfSound/(2*10000);

    // Prints the distance on the Serial Monitor
    return distance;
}
