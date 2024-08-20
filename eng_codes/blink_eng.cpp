// this is a example code to to testwiringpi with cmake.
#include <wiringPi.h> // Include WiringPi library!
#include <iostream> // include the standard c++ input output library.

int led = 14; // is the pin number for the led
int main()
{
  // uses BCM numbering of the GPIOs and directly accesses the GPIO registers.
  wiringPiSetupGpio();

  // pin mode ..(INPUT, OUTPUT, PWM_OUTPUT, GPIO_CLOCK)
  // set pin 14 to output
 
pinMode(led, OUTPUT);
  
 

while (1)
{


// Now the code toggles the led in a while loop.

// Now the led turns on. 
   digitalWrite(led,HIGH);
   std::cout <<"it Is on"<<'\n';
   // delays for 2 sec.
   delay(2000);
   // Now the led turns off.
   digitalWrite(led,LOW);
   std::cout <<"it Is off"<<'\n';
    // delays for 2 sec.
   delay(2000);
}}
