#include <Stepper.h>

int pasosPorVuelta =200;
int reciver = 6;
int stopreciver = 5;
Stepper motor(pasosPorVuelta, 8, 10, 9, 11);

void setup () {
  motor.setSpeed(70);  
  pinMode(reciver,INPUT);
  pinMode(stopreciver,INPUT);
}

void loop () {
  bool lectura = digitalRead(reciver);
  bool stop = digitalRead(stopreciver);


if (!stop){
  if (lectura){
     motor.step(pasosPorVuelta);
  }
  else{
     motor.step(-pasosPorVuelta);
  }
}

  /*
  motor.step(pasosPorVuelta);
  delay(0);

  motor.step(pasosPorVuelta);
  delay(0);

  motor.step(0);
  delay(600);

  motor.step(-pasosPorVuelta);
  delay(0);

  motor.step(-pasosPorVuelta);
  delay(0);

  motor.step(0);
  delay(600);*/


}

