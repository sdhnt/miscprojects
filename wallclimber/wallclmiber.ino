#include <Servo.h>
Servo leftsuc;
Servo leftbase;
Servo lefttop;

void setup() 
{ 
  Serial.begin(9600);
  lefttop.attach(9); 
  leftbase.attach(5);
  leftsuc.attach(6);
  lefttop.write(180);//e
  leftbase.write(180);
  leftsuc.write(90);//base
  
  
} 
 
void loop() 
  {
  
   for(int i=180;i>90;i--)
  {
    lefttop.write(i);
    leftbase.write(i);
    delay(70);
  }
  for(int i=90;i<180;i++)
  {
    lefttop.write(i);
    leftbase.write(i);
    delay(70);
  }
  
  /*
  
 leftsuc.write(97);
  delay(4000);
  leftsuc.write(90);
  delay(50);
  leftsuc.write(83);
  delay(2000);
  leftsuc.write(90);
  delay(50);
  
   */

  }
