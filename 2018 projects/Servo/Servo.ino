#include <Servo.h>


Servo myservo;
int pos=0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  for(pos=0;pos<60;pos+=1)
  {
    Serial.println(pos);
    myservo.write(pos);
    delay(20);
  }
  
  for(pos=60;pos>=1;pos-=1)
  {
    Serial.println(pos);
    myservo.write(pos);
    delay(20);
  }
}
