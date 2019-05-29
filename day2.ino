
int Switch = D3;
int LED = D6;
int Switch1;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(Switch,INPUT_PULLUP);
}
 void loop() {
  Switch1 = digitalRead(Switch);
  if ( Switch1 == LOW) {
    digitalWrite(LED,HIGH);
  }
  else {
    digitalWrite(LED,LOW);
  }
 }
