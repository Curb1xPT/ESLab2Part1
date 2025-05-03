#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
   DigitalIn gasDetect(D2);
   DigitalIn overTemp(D3);
   
   DigitalOut alarmLed(LED2);
   
   gasDetect.mode(PullDown);   
   overTemp.mode(PullDown);

   while (true) {
      
      if (gasDetect.read() || overTemp.read()) {
         alarmLed = ON;
      } else {
         alarmLed = OFF;
      }
   }
}