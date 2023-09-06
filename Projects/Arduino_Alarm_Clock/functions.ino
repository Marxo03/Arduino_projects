void displayNumber01(int toDisplay) 
{

  for(int digit = 4 ; digit > 0 ; digit--) 
  {

    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      digitalWrite(digit1, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 2:
      digitalWrite(digit2, DIGIT_ON);
      digitalWrite(segDP, LOW);
      break;
      
      case 3:
      digitalWrite(digit3, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 4:
      digitalWrite(digit4, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
    }

    lightNumber(toDisplay % 10);
    toDisplay /= 10;
    
    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    lightNumber(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************


void displayNumber02(int toDisplay) 
{


  for(int digit = 4 ; digit > 0 ; digit--) 
  {
    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      lightNumber(10); 
      digitalWrite(segDP, HIGH);
      break;

      case 2:
      digitalWrite(digit2, DIGIT_ON);
      digitalWrite(segDP, LOW);
      break;
      
      case 3:
      digitalWrite(digit3, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 4:
      digitalWrite(digit4, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
    }

    lightNumber(toDisplay % 10);
    toDisplay /= 10;

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    lightNumber(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************


void displayNumber03(int toDisplay) 
{

  for(int digit = 4 ; digit > 0 ; digit--) 
  {

    //Turn on a digit for a short amount of time
    switch(digit)
    {
      case 1:
      digitalWrite(digit1, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 2:
      digitalWrite(digit2, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;

      case 3:
      digitalWrite(digit3, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;

      case 4:
      digitalWrite(digit4, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
    }

    lightNumber(toDisplay % 10);
    toDisplay /= 10;

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    lightNumber(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************


void displayNumber04(int toDisplay) 
{


  for(int digit = 4 ; digit > 0 ; digit--) 
  {

    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      lightNumber(10); 
      digitalWrite(segDP, HIGH);
      break;

      case 2:
      digitalWrite(digit2, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;

      case 3:
      digitalWrite(digit3, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;

      case 4:
      digitalWrite(digit4, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
    }

    lightNumber(toDisplay % 10);
    toDisplay /= 10;

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    lightNumber(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 



//**************************************************************************************


//Given a number, turns on those segments
//If number == 10, then turn off number
void lightNumber(int numberToDisplay) 
{

  switch (numberToDisplay)
  {
    case 0:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);         //All segments are ON _ except G
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 1:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);         //B-C are ON _ A-D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 2:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);           //A-B-D-E-G are ON _ C-F are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 3:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-B-C-D-G are ON _ E is OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 4:                               
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);       
    digitalWrite(segD, SEGMENT_OFF);            //B-C-F-G are ON _ A-D-E are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 5:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-C-D-F-G are ON _ B-E are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 6:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //All segments are ON _ except B
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 7:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);             //A-B-C are ON _ D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 8:                           
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);             
    digitalWrite(segD, SEGMENT_ON);               // all segments are ON
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 9:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);               //All segments are ON _ except E         
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    
    case 10:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_OFF);              // all segments are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;
  
  }
}


//**************************************************************************************



void dis_Num_01(char word[]) 
{

  for(int digit = 4 , i = 0; digit > 0 ; digit--, i++) 
  {

    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      digitalWrite(digit1, DIGIT_ON);
      break;
      
      case 2:
      digitalWrite(digit2, DIGIT_ON);
      break;
      
      case 3:
      digitalWrite(digit3, DIGIT_ON);
      break;
      
      case 4:
      digitalWrite(digit4, DIGIT_ON);
      break;
    }

    light_Lett(word[i]);
    
    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    light_Lett('Z'); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************


void dis_Num_02(char word[]) 
{


  for(int digit = 4,i=0; digit > 0 ; digit--,i++) 
  {
    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      light_Lett(10); 
      digitalWrite(segDP, HIGH);
      break;

      case 2:
      digitalWrite(digit2, DIGIT_ON);
      break;
      
      case 3:
      digitalWrite(digit3, DIGIT_ON);
     break;
      
      case 4:
      digitalWrite(digit4, DIGIT_ON);
      break;
    }

    light_Lett(word[i]);
    

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    light_Lett('Z'); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************


void dis_Num_03(char word[]) 
{

  for(int digit = 4,i=0; digit > 0 ; digit--,i++) 
  {
    //Turn on a digit for a short amount of time
    switch(digit)
    {
      case 1:
      digitalWrite(digit1, DIGIT_ON);
      break;
      
      case 2:
      digitalWrite(digit2, DIGIT_ON);
      break;

      case 3:
      digitalWrite(digit3, DIGIT_ON);
      break;

      case 4:
      digitalWrite(digit4, DIGIT_ON);
      break;
    }

    light_Lett(word[i]);

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    light_Lett('Z'); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 


//**************************************************************************************



void dis_Num_04(char word[]) 
{


  for(int digit = 4,i=0; digit > 0 ; digit--,i++) 
  {
    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      light_Lett(10); 
      
      break;

      case 2:
      digitalWrite(digit2, DIGIT_ON);
      
      break;

      case 3:
      digitalWrite(digit3, DIGIT_ON);
      break;

      case 4:
      digitalWrite(digit4, DIGIT_ON);
      break;
    }

    light_Lett(word[i]);
    

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    light_Lett('Z'); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
} 



//*******************************************************************************************



void light_Lett(char letter) 
{

  switch (letter)
  {
    case 'A':
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);         //All segments are ON _ except G
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'E':
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);         //B-C are ON _ A-D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'I':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_OFF);           //A-B-D-E-G are ON _ C-F are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 'O':
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-B-C-D-G are ON _ E is OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 'U':                               
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);       
    digitalWrite(segD, SEGMENT_ON);            //B-C-F-G are ON _ A-D-E are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 'D':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-C-D-F-G are ON _ B-E are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'N':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);             //All segments are ON _ except B
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'M':
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);             //A-B-C are ON _ D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'R':                           
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_OFF);             
    digitalWrite(segD, SEGMENT_OFF);               // all segments are ON
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 'H':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);               //All segments are ON _ except E         
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    
    case 'S':
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);              // all segments are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'Y':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);              // all segments are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'T':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);              // all segments are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 'L':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);              // all segments are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 'Z':
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_OFF);              // all segments are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;
  
  }
}



//****************************************************************************************




void set_Time_lost()
{
  int time=0;
  int count_Button= 1, i=0;
  int yr=2023,mt=1,dy=1;
  char w1[]="TES";
  char w2[]="EMIT";
  char w3[]="YAD";
  char w4[]="NOM";
  char w5[]="RAEY";
  char w6[]="RUOH";
  char w7[]="NIM";


while ((count_Button == 1)&&(count_Button < 5))  //when push set button first time switch to set_Hour
{



  if(i==0)
  {

    tone(buzzer,2000);    //buzzer switch
    delay(400);
    noTone(buzzer);
    i++;


    for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
    {
      dis_Num_01(w1);
      //dis_Num_02(w1);
      //dis_Num_03(w1);
      //dis_Num_04(w1);    
    }


    for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
    {
      dis_Num_01(w5);
      //dis_Num_02(w5);
      //dis_Num_03(w5);
      //dis_Num_04(w5);    
    }	
  
  }


  //--------------------------------------------------------------------------------



  for(int i = 40 ; i > 0  ; i--)     //show 1-2 digits
  {
    dis_Set(yr);   
  }


  //set up Year
  if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900)) //Multiplex value
  {
    yr ++;   //Year increment 1
    if (yr > 3000) yr-= 1001;  //if time > 23 back to 0
  }

  //set down Year
  else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400)) //Multiplex value
  {
    yr --;   //Year decrement 1
    if (yr < 2000) yr += 1001;  //if time > 0 back to 23  
  } 
   

  //-------------------------------------------------------------------------------

  if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100))   //push set button 
  {
    count_Button++;     //increment to 2 pushed set button
    i=0;
    delay(200);
  }


  //--------------------------------------------------------------------------------


    
  while ((count_Button == 2)&&(count_Button < 5))       //when push set button second time switch to set_Minutes
  {


    if(i==0)
    {
      tone(buzzer,2000);      //buzzer switch
      delay(300);
      noTone(buzzer);
      i++;

	    for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
      {
        dis_Num_01(w1);
        //dis_Num_02(w1);
        //dis_Num_03(w1);
        //dis_Num_04(w1);    
      }

	    for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
      {
        dis_Num_01(w4);
        //dis_Num_02(w4);
        //dis_Num_03(w4);
        //dis_Num_04(w4);    
      }

	  
    }


   //--------------------------------------------------------------------------------    



    for(int i = 40 ; i > 0  ; i--)     //show 1-2 digits
    {
      dis_Set(mt);   
    }


    //set up Month
    if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900)) //Multiplex value
    {
      mt ++;   //Month increment 1
      if (mt > 12) mt -= 12;  //if time > 23 back to 0
    }

    //set down Month
    else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400)) //Multiplex value
    {
      mt --;   //Month decrement 1
      if (mt < 1) mt += 12;  //if time > 0 back to 23  
    } 
   


   //--------------------------------------------------------------------------------



    if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100)) //push set button to break
    {
      count_Button++;
      i=0;
      delay(200);
    }


   //--------------------------------------------------------------------------------


    while ((count_Button == 3)&&(count_Button < 5))
    {
      if(i==0)
      {
        tone(buzzer,2000);      //buzzer switch
        delay(300);
        noTone(buzzer);
        i++;

	      for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
      	{
          dis_Num_01(w1);
         	//dis_Num_02(w1);
         	//dis_Num_03(w1);
         	//dis_Num_04(w1);    
      	}

	      for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
      	{
          dis_Num_01(w3);
          //dis_Num_02(w3);
          //dis_Num_03(w3);
          //dis_Num_04(w3);
        }
      }    



     //--------------------------------------------------------------------------------


	    for(int i = 40 ; i > 0  ; i--)     //show 1-2 digits
    	{
      	dis_Set((dy*100)+mt);   
    	}


    	//set up day
    	if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900)) //Multiplex value
    	{
     		dy ++;   //day increment 1
      	if (dy  > 31) dy -= 31;  //if time > 23 back to 0
    	}

    	//set down day
    	else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400)) //Multiplex value
    	{
      	dy --;   //day decrement 1
      	if (dy < 1) dy += 31;  //if time > 0 back to 23  
    	} 

	   //--------------------------------------------------------------------------------



      if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100)) //push set button to break
      {
        count_Button++;
        i=0;
        delay(200);
      }

      //----------------------------------------------------------------------------------

      while ((count_Button == 4)&&(count_Button < 5))
      {
        if(i==0)
        {
          tone(buzzer,2000);    //buzzer switch
          delay(400);
          noTone(buzzer);
          i++;

          for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
      	  {
            dis_Num_01(w1);
            //dis_Num_02(w1);
            //dis_Num_03(w1);
            //dis_Num_04(w1);    
          }

          for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
          {
            dis_Num_01(w6);
            //dis_Num_02(w6);
            //dis_Num_03(w6);
            //dis_Num_04(w6);
          }	
    		}                   
                          
        //--------------------------------------------------------------------------------

        for(int i = 20 ; i > 0  ; i--)     //show 1-2 digits
        {
          (time > 100) ? displayNumber01(time) : displayNumber02(time);   
        }

        for(int i = 20 ; i > 0  ; i--)    //show 3-4 digits
        {
          (time > 100) ? displayNumber03(time) : displayNumber04(time);  
        } 



        //set up Hour
        if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900)) //Multiplex value
        {
          time += 100;   //Hour increment 1
          if ((time / 100) > 23) time -= 2400;  //if time > 23 back to 0
        }

        //set down Hour
        else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400)) //Multiplex value
        {
          time -= 100;   //Hour decrement 1
          if ((time / 100) < 0) time += 2400;  //if time > 0 back to 23  
        } 

        //--------------------------------------------------------------------------------            



		    if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100)) //push set button to break
        {
          count_Button++;
          i=0;
          delay(200);
        }


        //--------------------------------------------------------------------------------



        while (count_Button == 5)
        {
          if(i==0)
          {
            tone(buzzer,2000);    //buzzer switch
            delay(400);
            noTone(buzzer);
            i++;

            for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
            {
              dis_Num_01(w1);
              //dis_Num_02(w1);
              //dis_Num_03(w1);
              //dis_Num_04(w1);    
            }

            for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
            {
              dis_Num_01(w7);
              //dis_Num_02(w7);
              //dis_Num_03(w7);
              //dis_Num_04(w7);
            }	
          }

          //--------------------------------------------------------------------------------



          for(int i = 20 ; i >0  ; i--)   //show 1-2 digits
          {
            (time > 100) ? displayNumber01(time) : displayNumber02(time);   
          }

          for(int i = 20 ; i >0  ; i--)   //show 3-4 digits
          {
            (time > 100) ? displayNumber03(time) : displayNumber04(time);  
          } 


          //set_Up_Minutes
          if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900))
          {
            time++;      //Minutes increment 
            if ((time - (time / 100) * 100) > 59) time -= 60;
          }


          //set_Down_Minutes
          else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400))
          {
            time--;      //Minutes decrement
            if (((time - (time / 100) * 100 ) < 0 )||((time - (time / 100) * 100 ) > 90 )) time += 60;
          }



          //--------------------------------------------------------------------------------


          if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100)) //push set button to break
          {
            count_Button++;
            i=0;
            delay(200);
          }

        }

      }

    }
  }
 	
}
  int hr = (time/100);
  int mn = time - (hr*100);

  DateTime dt(yr, mt, dy, hr, mn, 0);// Anno, mese e giorno impostati a 0
  rtc.adjust(dt); 
}



//**************************************************************************************


void set_Alarm_Clock()
{
  char w1[]="TES";
  char w2[]="MRLA";
  int alarm=0;
  int count_Button= 1, i=0;
  rtc.clearAlarm(1);


  for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
  {
    dis_Num_01(w1);
    dis_Num_02(w1);
    dis_Num_03(w1);
    dis_Num_04(w1);    
  }

  for(int i = 100 ; i > 0  ; i--)     //show 1-2 digits
  {
    dis_Num_01(w2);
    dis_Num_02(w2);
    dis_Num_03(w2);
    dis_Num_04(w2);    
  }

  while (count_Button == 1)  //when push set button first time switch to set_Hour
  {
    
    if(i==0)
    {
      delay(100);
      tone(buzzer,2000);    //buzzer switch
      delay(500);
      noTone(buzzer);
      i++;	  
    }
    

    for(int i = 20 ; i > 0  ; i--)     //show 1-2 digits
    {
      (alarm > 100) ? displayNumber01(alarm) : displayNumber02(alarm);   
    }

    for(int i = 20 ; i > 0  ; i--)    //show 3-4 digits
    {
      (alarm > 100) ? displayNumber03(alarm) : displayNumber04(alarm);  
    } 

    //Serial.println(analogRead(A3));
    


    //set up Hour
    if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900)) //Multiplex value
    {
      alarm += 100;   //Hour increment 1
      if ((alarm / 100) > 23) alarm -= 2400;  //if time > 23 back to 0
    }

    //set down Hour
    else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400)) //Multiplex value
    {
      alarm -= 100;   //Hour decrement 1
      if ((alarm / 100) < 0) alarm += 2400;  //if time > 0 back to 23  
    } 
   
    
    if ((analogRead(set_Button)>20)&&(analogRead(set_Button)<100))   //push set button 
    {
      count_Button++;     //increment to 2 pushed set button
      i=0;
    }
   

    while (count_Button == 2)       //when push set button second time switch to set_Minutes
    {

      if(i==0)
      {
        delay(100);
        tone(buzzer,2000);      //buzzer switch
        delay(500);
        noTone(buzzer);
        i++;	  
      }


      for(int i = 20 ; i >0  ; i--)   //show 1-2 digits
      {
        (alarm > 100) ? displayNumber01(alarm) : displayNumber02(alarm);   
      }

      for(int i = 20 ; i >0  ; i--)   //show 3-4 digits
      {
        (alarm > 100) ? displayNumber03(alarm) : displayNumber04(alarm);  
      } 


      //set_Up_Minutes
      if ((analogRead(up__dwn_Buttons)>400)&&(analogRead(up__dwn_Buttons)<900))
      {
        alarm++;      //Minutes increment 
        if ((alarm - (alarm / 100) * 100) > 59) alarm -= 60;
      }


      //set_Down_Minutes
      else if ((analogRead(up__dwn_Buttons)>100)&&(analogRead(up__dwn_Buttons)<400))
      {
        alarm--;      //Minutes decrement
        if (((alarm - (alarm / 100) * 100 ) < 0 )||((alarm - (alarm / 100) * 100 ) > 90 )) alarm += 60;
      }



      if ((analogRead(set_Button)>0)&&(analogRead(set_Button)<100)) //push set button to break
      {
        count_Button++;
        i=0;
        delay(200);
      } 	
    } 
  }
  if(alarm!=0)
  {
    int hr = (alarm/100);
    int mn = alarm - (hr*100); 
    DateTime alarmTime(0, 0, 0, hr, mn, 0); // Anno, mese e giorno impostati a 0
    rtc.setAlarm1(alarmTime, DS3231_A1_Hour); // Imposta l'allarme 1 con l'ora e i minuti specificati 
    Serial.print("ALARM_SET : ");
    Serial.print(hr);
    Serial.print(":");
    Serial.println(mn);
  } 
}


//**************************************************************************************


void show_Time_Display()
{
  //Serial.println("OK");

  digitalWrite(segDP, HIGH);
  DateTime now = rtc.now();
  int timp = now.hour()*100+now.minute(); // display parts
     
  for(int i = 250 ; i >0  ; i--) 
  {
    (timp > 100) ? displayNumber01(timp) : displayNumber02(timp); 
  } 

  for(int i = 500 ; i >0  ; i--) 
  {
    (timp > 100) ? displayNumber03(timp) : displayNumber04(timp); 
      
  }
  //delay(3000);
}


//**************************************************************************************


void onAlarm()
{
  DateTime now = rtc.now();
  int timp = now.hour()*100+now.minute(); 

  for(int i=0;i<20;i++)   //Alarm_Buzzer_Tone
  {
    tone(buzzer,2000);
    delay(80);
    noTone(buzzer);
    delay(80);

    tone(buzzer,2000);
    delay(80);
    noTone(buzzer);
    delay(80);

    tone(buzzer,2000);
    delay(80);
    noTone(buzzer);
    delay(80);
      
    for(int i = 50 ; i >0  ; i--)
    {
      (timp > 100) ? displayNumber01(timp) : displayNumber02(timp); 
    } 

    for(int i = 50 ; i >0  ; i--) 
    {
      (timp > 100) ? displayNumber03(timp) : displayNumber04(timp); 
      
    }

    if((analogRead(A3)>900)&&(analogRead(A3)<1000))
    {
      break;
    }
  }

}



//**************************************************************************************



void dis_Set(int toDisplay) 
{

  for(int digit = 4 , i = 0; digit > 0 ; digit--, i++) 
  {
    digitalWrite(segDP, LOW);
    //Turn on a digit for a short amount of time
    switch(digit) 
    {
      case 1:
      digitalWrite(digit1, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 2:
      digitalWrite(digit2, DIGIT_ON);
      digitalWrite(segDP, LOW);
      break;
      
      case 3:
      digitalWrite(digit3, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
      
      case 4:
      digitalWrite(digit4, DIGIT_ON);
      digitalWrite(segDP, HIGH);
      break;
    }

    light_Num(toDisplay % 10);
    toDisplay /= 10;

    delayMicroseconds(DISPLAY_BRIGHTNESS); 

    //Turn off all segments
    light_Num(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
  }
}


//*********************************************************************************


void light_Num(int numberToDisplay) 
{

  switch (numberToDisplay)
  {
    case 0:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);         //All segments are ON _ except G
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 1:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);         //B-C are ON _ A-D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 2:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);           //A-B-D-E-G are ON _ C-F are OFF
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 3:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-B-C-D-G are ON _ E is OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 4:                               
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);       
    digitalWrite(segD, SEGMENT_OFF);            //B-C-F-G are ON _ A-D-E are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 5:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //A-C-D-F-G are ON _ B-E are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 6:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);             //All segments are ON _ except B
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 7:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);             //A-B-C are ON _ D-E-F-G are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

    case 8:                           
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);             
    digitalWrite(segD, SEGMENT_ON);               // all segments are ON
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    case 9:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);               //All segments are ON _ except E         
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

    
    case 10:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_OFF);              // all segments are OFF
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;
  
  }
}


void mic_Int()
{
  sleep_disable();
  micInt=false;
}


void alarm_Int()
{
  sleep_disable();
  alarmInt=false; 
}


