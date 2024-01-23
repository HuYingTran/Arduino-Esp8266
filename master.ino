#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(5,OUTPUT);
}
int dem = 0;
void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(6)&dem == 0){
      dem = 1;
      Wire.beginTransmission(6);
      Wire.write('H');
      Wire.endTransmission();
      digitalWrite(5,HIGH);
    }else if(digitalRead(7)&dem == 0){
      dem = 1;
      Wire.beginTransmission(7);
      Wire.write('K');
      Wire.endTransmission();
    }
}
