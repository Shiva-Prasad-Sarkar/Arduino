#define TRIG 9
#define ECHO 10
#define BUZZER 3    // Buzzer connected to pin 3

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2; // convert to cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < 20) {
    digitalWrite(BUZZER, HIGH);  // turn buzzer ON
  } else {
    digitalWrite(BUZZER, LOW);   // turn buzzer OFF
  }

  delay(200);
}
