#ifndef __DISPLAY7SEGMENTOS_H__
#define __DISPLAY7SEGMENTOS_H__
#include <Arduino.h>

//**********************************************************************************************************************
// Variables Globales
//**********************************************************************************************************************
extern uint8_t pindisplayA; 
extern uint8_t pindisplayB; 
extern uint8_t pindisplayC; 
extern uint8_t pindisplayD; 
extern uint8_t pindisplayE; 
extern uint8_t pindisplayF; 
extern uint8_t pindisplayG; 
extern uint8_t pindisplaydP; 

//**********************************************************************************************************************
// Prototipo de Funciones
//**********************************************************************************************************************
// Funcion de configuracion de display de 7 segmentos
void configurarDisplay(uint8_t A, uint8_t B, uint8_t C, uint8_t D,uint8_t E, uint8_t F, uint8_t G, uint8_t dP);
//Funcion para desplegar el digito en el display de 7 segmentos 
void desplegar7Segmentos(uint8_t digito);
//Funcion para desplegar el punto en el display de 7 segmentos 
void desplegarPunto(boolean punto);
#endif // __DISPLAY7SEGMENTOS_H__