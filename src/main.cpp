#include <Arduino.h>
#include <WiFi.h>
 
const char * ssid = "lsgo";
const char * password = "1234abcd";
const int puerto = 80;
int numero = 10; 

void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
  Serial.begin(115200);
  Serial.println("Inicializando dispositivo");
    WiFi.begin (ssid, password);
}

void loop()   {  
  Serial.print("En loop(): numero = "); //En loop(): numero = 10 
  Serial.println(numero); 
  duplicar( &numero );               
  
}
  void duplicar(int *punteroNumero)  {   
    *punteroNumero = *punteroNumero * 2 ; 
    Serial.print("En duplicar(): punteroNumero = "); 
    Serial.println(*punteroNumero); 
     }

