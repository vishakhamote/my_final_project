#include <SoftwareSerial.h>
SoftwareSerial BT(11,12);
int redPin=3;
int greenPin=5;
int bluePin=6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(38400);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

  setColor(255, 0, 0);
  delay(500);
  setColor(0,255,0);
  delay(500);
  setColor(0,0,255);
  delay(500);
  setColor(255,255,255);
}

void loop() {
  // put your main code here, to run repeatedly:
if(BT.available()>0)
{
  int redInt=BT.parseInt();
  int greenInt=BT.parseInt();
  int blueInt=  BT.parseInt();

  redInt=constrain(redInt,0,255);
  greenInt=constrain(greenInt,0,255);
  blueInt=constrain(blueInt,0,255);

  if(BT.available()>0)
  {
    setColor(redInt,greenInt,blueInt);
    Serial.println("red:");
    Serial.print(redInt);
    Serial.println("green:");
    Serial.print(greenInt);
    Serial.println("blue:");
    Serial.print(blueInt);
     BT.flush();
  }
}
}

void setColor(int red,int green,int blue)
{
  analogWrite(redPin,red);
  analogWrite(greenPin,green);
  analogWrite(bluePin,blue);
}
