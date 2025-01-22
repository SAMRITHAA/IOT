int ledR=13;
int ledG=12;
int ledY=11;
void setup(){
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledY,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int d=Serial.read();
  if(d=='A'){
    digitalWrite(ledR,HIGH);
  }
  if(d=='B'){
    digitalWrite(ledR,LOW);
  }
  if(d=='C'){
    digitalWrite(ledY,HIGH);
  }
  if(d=='D'){
    digitalWrite(ledY,LOW);
  }
  if(d=='E'){
    digitalWrite(ledG,HIGH);
  }
  if(d=='F'){
    digitalWrite(ledG,LOW);
  }
  if(d=='X'){
    digitalWrite(ledR,HIGH);
    digitalWrite(ledY,HIGH);
    digitalWrite(ledG,HIGH);
  }
  if(d=='Y'){
    digitalWrite(ledR,LOW);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,LOW);
  }
}
