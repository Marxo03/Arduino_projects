#include "myLib.h"

void loop() 
{
  int alarm;
  DateTime now;
  int timp;

  if(!micInt)
  {
    micInt=true;
    show_Time_Display();
    if((analogRead(set_Button)>20)&&(analogRead(set_Button)<100))
    {
      set_Alarm_Clock();
    }
  }

  if(!alarmInt)
  {
    alarmInt=true;
    onAlarm();    
  }

  sleep_mode(); 
  
} 



