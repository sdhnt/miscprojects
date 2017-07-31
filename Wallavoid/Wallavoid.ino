int trigf= 4; // attach pin 3 to Trig
int echof= 2; //attach pin 4 to Echo
int trigl=5;
int echol=4;
int trigr=7;
int echor=6;


void setup() {
  
  //Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin

  //Setup Channel B
  pinMode(13, OUTPUT); //Initiates Motor Channel A pin
  pinMode(8, OUTPUT);  //Initiates Brake Channel A pin
Serial.begin(9600);
  
}

void loop(){

long duration1,cm1;

pinMode(trigf, OUTPUT);
digitalWrite(trigf, LOW);
delayMicroseconds(2);
digitalWrite(trigf, HIGH);
delayMicroseconds(5);
digitalWrite(trigf, LOW);

pinMode(echof,INPUT);
duration1 = pulseIn(echof, HIGH);

cm1 = microsecondsToCentimeters(duration1);

Serial.println(cm1);




if(cm1<=350)
{
 leftaback(); 
}
else
{
  fwd();
}
brake();
}


void fwd()
{
    digitalWrite(12, LOW);  //Establishes backward direction of Channel A
  digitalWrite(9, LOW);  
  analogWrite(3, 100);    
    digitalWrite(13, LOW);  //Establishes backward direction of Channel B
  digitalWrite(8, LOW);  
  analogWrite(11, 100);  delay(1000);
}
void back()
{
    digitalWrite(12, HIGH);  //Establishes backward direction of Channel A
  digitalWrite(9, LOW);  
  analogWrite(3, 100);    
    digitalWrite(13, HIGH);  //Establishes backward direction of Channel B
  digitalWrite(8, LOW);  
  analogWrite(11, 100);  delay(1000);
}
void brake()
{
   digitalWrite(9, HIGH);  //Engage the Brake for Channel A
  digitalWrite(8, HIGH);  
}


void leftaback()
{
  back(); delay(1000);
   digitalWrite(13,LOW); //Establishes forward direction of Channel B
  digitalWrite(8, LOW);  
  analogWrite(11, 100);
  digitalWrite(12, HIGH);  //Establishes backward direction of Channel A
  digitalWrite(9, LOW);  
  analogWrite(3, 100);   
  delay(500);
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 2.9 / 2;
}

