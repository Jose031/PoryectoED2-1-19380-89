#include "Display7Segmentos.h"
//**********************************************************************************************************************
// Variables Globales
//**********************************************************************************************************************
uint8_t pindisplayA;
uint8_t pindisplayB;
uint8_t pindisplayC;
uint8_t pindisplayD;
uint8_t pindisplayE;
uint8_t pindisplayF;
uint8_t pindisplayG;
uint8_t pindisplaydP;

//**********************************************************************************************************************
// Prototipo de Funciones
//**********************************************************************************************************************
// Funcion de configuracion de display de 7 segmentos
void configurarDisplay(uint8_t pinA, uint8_t pinB, uint8_t pinC, uint8_t pinD, uint8_t pinE, uint8_t pinF, uint8_t pinG, uint8_t pindP)
{
    //Actualizacion de variables
    pindisplayA = pinA;
    pindisplayB = pinB;
    pindisplayC = pinC;
    pindisplayD = pinD;
    pindisplayE = pinE;
    pindisplayF = pinF;
    pindisplayG = pinG;
    pindisplaydP = pindP;

    //Definicion de salidas de los pines del display
    pinMode(pindisplayA, OUTPUT);
    pinMode(pindisplayB, OUTPUT);
    pinMode(pindisplayC, OUTPUT);
    pinMode(pindisplayD, OUTPUT);
    pinMode(pindisplayE, OUTPUT);
    pinMode(pindisplayF, OUTPUT);
    pinMode(pindisplayG, OUTPUT);
    pinMode(pindisplaydP, OUTPUT);
    // Estado inicial de los leds del display
    digitalWrite(pindisplayA, LOW);
    digitalWrite(pindisplayB, LOW);
    digitalWrite(pindisplayC, LOW);
    digitalWrite(pindisplayD, LOW);
    digitalWrite(pindisplayE, LOW);
    digitalWrite(pindisplayF, LOW);
    digitalWrite(pindisplayG, LOW);
    digitalWrite(pindisplaydP, LOW);
}
