int led = 13;
int led2 = 12;

void setup() {
   pinMode(led, OUTPUT);
   pinMode(led2, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  delay(500); 

}
