#include <Servo.h> 
 
Servo base;
Servo no1;
Servo elbow;
 
int pos = 90; 
 
void setup() 
{ 
  base.attach(9);
  no1.attach(10);
  elbow.attach(11);

} 
 
 
void loop() 
{ 
 
  base.write(90);
  no1.write(90);
  elbow.write(90);
 for(pos=90;pos<180;pos+=1) 
 {base.write(pos);
 delay(25);
  no1.write(pos);
   delay(25);
  elbow.write(pos);
 delay(25);}
 
  for(pos=180;pos>0;pos-=1) 
 {base.write(pos);
 delay(25);
  no1.write(pos);
   delay(25);
  elbow.write(pos);
 delay(25);}
 
  for(pos=0;pos<=90;pos+=1) 
 {base.write(pos);
 delay(25);
  no1.write(pos);
   delay(25);
  elbow.write(pos);
 delay(25);}
  
  
} 
