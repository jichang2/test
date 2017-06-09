// This code is written for a Raspberry Pi to test a 4-pin LED
// LED PINS: r=12;g=16;b=18;
// Test for GitHub

#include <wiringPi.h>

#include <iostream>
using namespace std;

int main(void)
{
  int pin[3]={1,4,5};
  wiringPiSetup();
  for (int i=0; i<3; i++)
  {
      pinMode(pin[i],OUTPUT);
      digitalWrite(pin[i],HIGH); delay(500);
      digitalWrite(pin[i], LOW); delay(500);
  }
  return 0;
}
