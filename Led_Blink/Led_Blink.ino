int led1 = 13;

void setup() {
  
  pinMode(led1, OUTPUT);
}

void loop() {
  
digitalWrite(led1,1); 
delay(100); 
digitalWrite(led1,0); 
delay(100); 
}
