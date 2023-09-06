#include <Time.h>
#include <TimeLib.h>
#include <RTClib.h>
#include <Wire.h>
//#include <DS3231.h>            //Real-Time-Clock library
#include <avr/sleep.h>            //Sleep-Mode library  
#include "Star_Trek.h"            //local Star-Trek-Theme library
  
#define DIGIT_ON  HIGH
#define DIGIT_OFF  LOW
#define SEGMENT_ON  LOW
#define SEGMENT_OFF HIGH
#define DISPLAY_BRIGHTNESS  1000

RTC_DS3231 rtc;             //rtc initialized

#define CLOCK_INTERRUPT_PIN 2
#define MIC 3

#define set_Button A3
#define up__dwn_Buttons A3

#define digit1 4
#define digit2 5
#define digit3 6
#define digit4 7

#define segA 12
#define segB 11
#define segC 10
#define segD 9
#define segE 8
#define segF A1
#define segG A0
#define segDP 13


int micValue = digitalRead(MIC);
bool micInt = true;
bool alarmInt = true;
/*
  BUTTONS PINS  
   ______________GND
  |_  |_  |_
  |O| |O| |O|
   -|  -|  -|
    A2  A1  A0
*/

// RTC PINS   DS = /  SCL = A5  SDA = A4  VCC = 5V  GND = GND

//void onAlarm();
//int set_Alarm_Clock();
void mic_Int();
void alarm_Int();
void set_Time_lost();

void setup()
{

  Wire.begin();

  if (! rtc.begin())        //rtc verify
  {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1);
  }

  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));       
  // automatically sets the RTC to the date & time on PC this sketch was compiled
  //OBS: after upload for first time comment and upload again 

  

  rtc.disable32K();

  pinMode(digit1, OUTPUT);  //DIGIT_countrol_OUT
  pinMode(digit2, OUTPUT);  //DIGIT_countrol_OUT
  pinMode(digit3, OUTPUT);  //DIGIT_countrol_OUT
  pinMode(digit4, OUTPUT);  //DIGIT_countrol_OUT

  pinMode(segA, OUTPUT);    //seg_Led_OUT
  pinMode(segB, OUTPUT);    //seg_Led_OUT
  pinMode(segC, OUTPUT);    //seg_Led_OUT
  pinMode(segD, OUTPUT);    //seg_Led_OUT
  pinMode(segE, OUTPUT);    //seg_Led_OUT
  pinMode(segF, OUTPUT);    //seg_Led_OUT
  pinMode(segG, OUTPUT);    //seg_Led_OUT
  pinMode(segDP, OUTPUT);   //seg_Led_OUT

  
  pinMode(MIC,LOW);
  pinMode(buzzer, OUTPUT);            //buzzer out sound
  pinMode(MIC, INPUT);         //microphone sensor input interrupt
  pinMode(set_Button, INPUT_PULLUP);  //set button input interrupt
  pinMode(up__dwn_Buttons, INPUT);    //switch up alarm set
  
  //digitalWrite(MIC,HIGH);
  pinMode(CLOCK_INTERRUPT_PIN, INPUT_PULLUP);  // Making it so, that the alarm will trigger an interrupt
  attachInterrupt(digitalPinToInterrupt(CLOCK_INTERRUPT_PIN), alarm_Int, FALLING);
  // set alarm 1, 2 flag to false (so alarm 1, 2 didn't happen so far)
  // if not done, this easily leads to problems, as both register aren't reset on reboot/recompile
  rtc.clearAlarm(1);
  rtc.clearAlarm(2);

  // stop oscillating signals at SQW Pin
  // otherwise setAlarm1 will fail
  rtc.writeSqwPinMode(DS3231_OFF);

  // turn off alarm 2 (in case it isn't off already)
  // again, this isn't done at reboot, so a previously set alarm could easily go overlooked
  rtc.disableAlarm(2);

  Serial.begin(9600);      //serial_interface_initialized
  digitalWrite(set_Button, HIGH);       //pull-ups on
  digitalWrite(up__dwn_Buttons, HIGH);  //Up_Dwn-> 1023/1024 (HIGH) value 
  
  // micValue = digitalRead(MIC); 

  //STAR TREK THEME
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  Star_Trek_Tone();
  Serial.begin(9600);

  if (rtc.lostPower())
  {
    delay(1000);
    set_Time_lost();
  }

  attachInterrupt(digitalPinToInterrupt(MIC), mic_Int, FALLING);

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();

}



