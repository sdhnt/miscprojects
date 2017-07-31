#include <Servo.h> 
Servo rightfoot;
Servo righthigh;
Servo leftfoot;
Servo leftthigh;
 int pos;
void setup() 
{ 
rightfoot.attach(3);
righthigh.attach(5);
leftfoot.attach(9);
leftthigh.attach(6);

} 
 
 
void loop() 
{  int pos=120;
rightfoot.write(90);
righthigh.write(120);
leftfoot.write(90);
leftthigh.write(120);delay(500);
rightfoot.write(150);delay(10);
for(int i=90;i>=60;i--)
{
leftfoot.write(i);delay(50);}

rightfoot.write(90);delay(50);
for(int i=120;i>=60;i--)
{
righthigh.write(i);delay(50);}

for(int i=120;i>=60;i--)
{
leftthigh.write(i);delay(50);}

for(int i=60;i<=90;i++)
{leftfoot.write(i);delay(50);}
leftfoot.write(45); delay(10);
for(int i=90;i<=130;i++)
{
rightfoot.write(i);delay(50);}
leftfoot.write(90);
for(int i=60;i<=120;i++)
{
leftthigh.write(i);delay(50);}
for(int i=60;i<=130;i++)
{
righthigh.write(i);delay(50);}

for(int i=130;i>=90;i--)
{
rightfoot.write(i);delay(50);}

}


