int gas=A0;
int led=13;
void setup(){
  pinMode(gas,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int jd=analogRead(gas);
  Serial.println(jd);
  delay(1000);
  if(jd >=400){
    analogWrite(led,HIGH);
  }
  else{
    analogWrite(led,LOW);
  }
}
