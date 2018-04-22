const int ledPin=11;
const int buttonPin=7;
int val;

void setup() {
  // put your setup code here, to run once:
 pinMode(buttonPin,INPUT);
 pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 val=digitalRead(buttonPin);

 if(val==HIGH){
  digitalWrite(ledPin,HIGH);
//  delay(1000);
//  digitalWrite(ledPin,LOW);
//  delay(1000);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
