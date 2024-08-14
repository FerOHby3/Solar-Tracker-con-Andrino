#include <Stepper.h>

int pasosPorVuelta =500;
int trigger = 7;
int stop = 6;
Stepper motor(pasosPorVuelta, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(stop,OUTPUT);
}

void loop() {
  int lum1 = analogRead(A0);
  int lum2 = analogRead(A1);
  int valor= lum1-lum2;
  Serial.print("valor: ");
  Serial.print(valor);
  Serial.println();

  delay(500);

if (valor>31)
{
  digitalWrite(trigger, HIGH);
  digitalWrite(stop,LOW);

}
else if (valor<-31)
{
  digitalWrite(trigger,LOW);
  digitalWrite(stop,LOW);
}
else
{
  digitalWrite(stop,HIGH);
}

}