
int t=2000;
int r=13;
int y=12;
int g=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);              // wait for a second
  digitalWrite(r, LOW);    // turn the LED off by making the voltage LOW

  digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);              // wait for a second
  digitalWrite(y, LOW);    // turn the LED off by making the voltage LOW

  digitalWrite(g, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);              // wait for a second
  digitalWrite(g, LOW);    // turn the LED off by making the voltage LOW 
}
