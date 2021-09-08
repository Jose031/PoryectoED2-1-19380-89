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
//Funcion para desplegar el digito en el display de 7 segmentos
void desplegar7Segmentos(uint8_t digito)
{
    switch (digito)
    {
    case 0:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 1);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 0);
        break;
    case 1:
        digitalWrite(pindisplayA, 0);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 0);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 0);
        digitalWrite(pindisplayG, 0);

        break;
    case 2:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 0);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 1);
        digitalWrite(pindisplayF, 0);
        digitalWrite(pindisplayG, 1);
        break;
    case 3:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 0);
        digitalWrite(pindisplayG, 1);
        break;

    case 4:
        digitalWrite(pindisplayA, 0);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 0);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 1);
        break;
    case 5:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 0);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 1);
        break;
    case 6:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 0);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 1);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 1);
        break;
    case 7:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 0);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 0);
        digitalWrite(pindisplayG, 0);
        break;

    case 8:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 1);
        digitalWrite(pindisplayE, 1);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 1);
        break;

    case 9:
        digitalWrite(pindisplayA, 1);
        digitalWrite(pindisplayB, 1);
        digitalWrite(pindisplayC, 1);
        digitalWrite(pindisplayD, 0);
        digitalWrite(pindisplayE, 0);
        digitalWrite(pindisplayF, 1);
        digitalWrite(pindisplayG, 1);
        break;

    default:
        break;
    }
}
//Funcion para desplegar el punto en el display de 7 segmentos
void desplegarPunto(boolean punto)
{
    if (punto == 1)
    {
        digitalWrite(pindisplaydP, HIGH);
    }
    else
    {
        digitalWrite(pindisplaydP, LOW);
    }
}