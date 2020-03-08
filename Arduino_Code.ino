//Include DHT library 
#include <dht.h>

//Defining data pin
#define dataPin A4
dht DHT;

int pressureAnalogPin = 0;
int pressureReading;

int noPressure = 5;
int lightPressure = 100;
int mediumPressure = 200;
String strTemp;
String strHumid;
String strForce;
const int motorPin = 3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(motorPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
pressureReading = analogRead(pressureAnalogPin);
int readData = DHT.read22(dataPin);
float temp = DHT.temperature;
float humid = DHT.humidity;
strTemp=String(temp);
strHumid=String(humid);
strForce=String(pressureReading);
Serial.print(strTemp+","+strHumid+","+strForce);
Serial.println();
//Serial.print(",");
//Serial.print(humid);
//Serial.print(",");
//Serial.print(pressureReading);
//Serial.print(",");
//Serial.println();
digitalWrite(motorPin, HIGH);
delay(5000);
digitalWrite(motorPin, LOW);

delay(2000);

}
