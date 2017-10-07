int red=3;
int green=5;
int blue=6;

int analogRed=A0;
int analogGreen=A1;
int analogBlue=A2;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a,b,c;
a=analogRead(analogRed);
b=analogRead(analogGreen);
c=analogRead(analogBlue);

digitalWrite(red,a);
digitalWrite(green,b);
digitalWrite(blue,c);
//delay(1000);

}
