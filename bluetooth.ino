int led=13;
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int d=Serial.read();
  if(d=='X'){
  digitalWrite(led,HIGH);
}
if(d=='Y'){
  digitalWrite(led,LOW);
}
}
