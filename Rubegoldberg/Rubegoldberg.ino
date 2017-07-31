
#include <Servo.h>
int motorstage1=11;
int solenoidstage3=8;
int stage5motor=12;
Servo Stage2; 
Servo Stage3;
int led4=7;
int led1=4;
int led2=6;
int led3=5;
int bc=A0;
void setup() {
  pinMode(8,OUTPUT);//Solenoid st3
  
  Stage2.attach(9); 
  Stage2.write(90);
  Stage3.attach(10);
  Stage3.write(90);
  pinMode(12,OUTPUT);
   pinMode(11, OUTPUT);//Motor Stage 1
   pinMode(13,OUTPUT);
   Serial.begin(9600);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   //pinMode(bc,INPUT);
   digitalWrite(led1,HIGH);
   Serial.begin(9600);
   
}

void loop() {
  Serial.println(analogRead(A0));
 
  if((analogRead(A0))<500)
  {
    
  
 Serial.println("BEGIN");
  digitalWrite(motorstage1, HIGH);
  delay(12500);
  digitalWrite(motorstage1, LOW);
  Serial.println("s1done");
  ////////////////////////////////////////////////////////////////////////////////////Stage 2
   delay(5000);
  Stage2.write(105);
  delay(700);
  Stage2.write(90);
  delay(1000);
  Stage2.write(75);
  delay(300);
  Stage2.write(90);
  delay(10);
  Serial.println("s2done");
  ////////////////////////////////////////////////////////////////////////////////////Stage3
  
 
  delay(2000);     //20.200
  Stage3.write(75);
   delay(18000);
  //Solenoid starts here
  digitalWrite(solenoidstage3, HIGH);
  delay(3500);
 /* delay(500);
  digitalWrite(solenoidstage3, LOW);
  delay(500);
  digitalWrite(solenoidstage3, HIGH);
  delay(500);
  digitalWrite(solenoidstage3, LOW);
  delay(500);
  digitalWrite(solenoidstage3, HIGH);
  delay(500);
  delay(500);
  */
  
  Stage3.write(90);
  delay(1000);
 
  /////////////////////
  
  digitalWrite(solenoidstage3, LOW);
  (3000);
  /////////////////////////////////////////////////////////////////////////////////////////////// Stage 4
  
    digitalWrite(led1,HIGH);
  delay(1000);
  
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led3,HIGH); delay(500);digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led4,HIGH); delay(500);digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led3,HIGH); delay(500);digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led2,HIGH); delay(500);digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led1,HIGH); delay(500);digitalWrite(led2,LOW);
  //delay(1000);
//////////////////////////////////////////////////////////////////////////////////////////Stage 5

  //delay(1000);
  digitalWrite(stage5motor,HIGH);
  delay(4000);
  digitalWrite(stage5motor,LOW);
  delay(1000);

 ////////////////////////////////////Stage3 unwind
  Stage3.write(105);
  delay(3000);
  delay(18250);
  Stage3.write(90);
  delay(1000);
  
  delay(10000000);
  
  
  ////
  }

}
