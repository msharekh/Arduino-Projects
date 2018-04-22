
int t=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, (int) ((sin(2*3.14*t)+1)/2*255));
  t++;
  
  delay(1);
  Serial.println((int) ((sin(2*3.14*t)+1)/2*255));  
  
}
