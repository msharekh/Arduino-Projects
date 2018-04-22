#define echoPin 3 // Echo Pin
#define trigPin 4 // Trigger Pin

#define LowPin 10 // low level LED
#define MidPin 9  // medium level LED
#define HigPin 8  // high level LED

#define LowRange 10 // Low Range
#define MidRange 20 // Mid Range
#define HigRange 30 // Hi Range

long duration, distance; // Duration used to calculate distance

void setup() {
  // send logs
  Serial.begin (9600);
  // to send soundwaves
  pinMode(trigPin, OUTPUT);
  // to receive soundwaves
  pinMode(echoPin, INPUT);
  // LEDs pins
  pinMode(LowPin, OUTPUT);
  pinMode(MidPin, OUTPUT);
  pinMode(HigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/* The following trigPin/echoPin cycle is used to determine the
  distance of the nearest object by bouncing soundwaves off of it. */ 

  // stop pin
  digitalWrite(trigPin, LOW);
  // wait for 2ms
  delayMicroseconds(2);
  
  // send soundwaves
  digitalWrite(trigPin, HIGH);
  // wait for 10ms
  delayMicroseconds(10);
  // stop pin
  digitalWrite(trigPin, LOW);
  // read the soundwaves
  duration = pulseIn(echoPin, HIGH);
  // Calculate the distance (in cm) based on the speed of sound.
  distance = duration/58.2;
 
  if (distance > 0 and distance <= LowRange){
    digitalWrite(HigPin, LOW);
    digitalWrite(MidPin, LOW);
    digitalWrite(LowPin, HIGH); // On
    Serial.println("LowPin");
  } else if (distance > LowRange and distance <= MidRange){
    digitalWrite(HigPin, LOW);
    digitalWrite(MidPin, HIGH); // On
    digitalWrite(LowPin, LOW);
    Serial.println("MidPin");
  } else {
    digitalWrite(HigPin, HIGH); // On
    digitalWrite(MidPin, LOW);
    digitalWrite(LowPin, LOW);
    Serial.println("HigPin");
  }
  
  // Send the distance to the computer using Serial protocol
  Serial.println(distance);

  // Delay 300ms before next reading.
  delay(300);

}
