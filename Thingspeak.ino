#include<ThingSpeak.h>
#include<ESP8266WiFi.h>
#define LED D0
const char *ssid = "Asprin";
const char *pass = "as_07015";
const char *server = "api.thingspeak.com";
WiFiClient client;
unsigned long myChannelNumber = 2638413;
const char * myWriteAPIKey ="H16X9EQZUTTY9V3R";
int A,B;
void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  WiFi.begin(ssid,pass);
  while(WiFi.status() != WL_CONNECTED){
    digitalWrite(LED, 1);
    delay(500);
    digitalWrite(LED, 0);
    delay(500);
  }
  ThingSpeak.begin(client);
  }
  void loop(){
    ThingSpeak.setField(1,A);
    ThingSpeak.setField(2,B);
    ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(15000);
    A++;
    B++;
}
