int led=13;
int ir=7;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
}
void loop(){
  int m=digitalRead(ir);
  if(m==0){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
