int ledR=13;
int ledY=12;
int ledG=11;
void setup(){
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
}
void loop(){
  digitalWrite(ledR,HIGH);
  delay(500);
  digitalWrite(ledR,LOW);
  delay(500);
  digitalWrite(ledY,HIGH);
  delay(500);
  digitalWrite(ledY,LOW);
  delay(500);
  digitalWrite(ledG,HIGH);
  delay(500);
  digitalWrite(ledG,LOW);
  delay(500);
}
