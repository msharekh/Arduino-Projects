const int sensorPin=A0;
const int ledPin=11;
int sensorVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  sensorVal=analogRead(sensorPin);
 
  digitalWrite(ledPin,HIGH);
  delay(sensorVal);

  digitalWrite(ledPin,LOW);
  delay(sensorVal);

   
  Serial.println(sensorVal);
    
}
