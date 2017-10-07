int sensorPin=A0;
//int heart_rate;

volatile int beat[10];   

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sensorPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int val,temp;
val=analogRead(sensorPin);
temp=map(val,0,1023,0,74);
Serial.println(val);
//heart_bit();
//Serial.println(heart_rate);
delay(500);

}

