#define led 9
void setup () {
  pinMode (led, INPUT);
}
void loop () {
  digitalWrite (led, HIGH);
}
