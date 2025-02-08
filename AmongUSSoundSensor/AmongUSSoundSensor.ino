/*
	Capitulo 13 de Arduino desde cero en Español.
	Programa que utiliza la salida digital D0 del modulo KY-038 (o KY-037)
        para mantener encendido o apagado un LED.

	Autor: bitwiseAr  

*/

int MIC = 2;				// D0 de modulo a pin 2
int LED = 13;				// anodo de LED a pin 3
int VALOR;				// variable para almacenar valor de D0
int ESTADO;				// variable para almacenar estado del LED


void setup(){
  pinMode(MIC, INPUT);			// pin 2 como entrada
  pinMode(LED, OUTPUT);			// pin 3 como salida
  Serial.begin(9600);
}


void loop(){
  VALOR = digitalRead(MIC);		// obtiene valor de D0
  if (VALOR == HIGH){			// si D0 tiene un valor alto
    Serial.print(VALOR);
    ESTADO = digitalRead(LED);		// almacena estado del led (encendido o apagado)
    digitalWrite(LED, !ESTADO);		// escribe en LED el valor opuesto al que tenia
    delay(500); 			// demora de medio seg. para evitar pulsos espureos
  }
}