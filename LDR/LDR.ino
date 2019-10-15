void setup() {
  Serial.begin (9600);
}
void loop() {
  int LDR = analogRead (A1);
  Serial.begin (LDR);
  delay (1000);
}
