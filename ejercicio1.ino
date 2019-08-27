//incluir librerias

//declarar variables
int pinLed1 = 2;
void setup(){
  pinMode(pinLed1,OUTPUT);
  digitalWrite(pinLed1,LOW);
}
void loop(){
  digitalWrite(pinLed1, HIGH);
  delay(500);
  digitalWrite(pinLed1, LOW);
  delay(500);
}
//funciones
