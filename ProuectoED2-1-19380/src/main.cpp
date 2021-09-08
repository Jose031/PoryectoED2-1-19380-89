//********************************************************************************
// Universidad del Valle de Guatemala
// BE3015: Electronónica Digital 2
// José David Méndez 19380
// Proyecto: 1
//********************************************************************************

//**********************************************************************************************************************
// Librerías
//**********************************************************************************************************************
#include <Arduino.h>
#include "Display7Segmentos.h"
//**********************************************************************************************************************
// Defincion de Pines
//**********************************************************************************************************************

#define ledR 14
#define ledA 12
#define ledV 13
// Definición de la varaible de salida del servo motor con su respectivo pin
#define pinPWMservo 4
#define prescaler 80
// Definción de varaibles para la configuración del PWM
#define pwmChservo 0 // 16 Canales 0-15
#define pwmChledR 1  // 16 Canales 0-15
#define pwmChledA 2  // 16 Canales 0-15
#define pwmChledV 3  // 16 Canales 0-15
#define freqPWM 50   // Frecuencia en Hz
#define resolucion 8 // 1-16 bits de resolucion

void setup() {
  // put your setup code here, to run once:
// Defincion de las variables de los pines del display de 7 segmentos
#define pindisplayA 5
#define pindisplayB 16
#define pindisplayC 33
#define pindisplayD 26
#define pindisplayE 27
#define pindisplayF 17
#define pindisplayG 32
#define pindisplayDP 25
#define display1 21
#define display2 19
#define display3 18
//**********************************************************************************************************************
// Prototipo de Funciones
//**********************************************************************************************************************
void EMAADC(void);
void configurarPWM(void);
void RSemaforoT(void);
void correrDisplay(void);
//**********************************************************************************************************************
// Variables Globales
//**********************************************************************************************************************
int adcRaw = 0;
int estadoBoton = 0;
double adcFiltradoT = 0; // S(0) = Y(0)
double alpha = 0.09;     // Factor de suavizado (0-1)
float temperatura = 0.0;
//**********************************************************************************************************************
// ISR: Interrupciones
//**********************************************************************************************************************
void IRAM_ATTR ISRB1()
{
  estadoBoton = 1;
}
}
//**********************************************************************************************************************
// Configuracion
//**********************************************************************************************************************
  pinMode(Boton1, INPUT_PULLUP);

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(display1, OUTPUT);
  pinMode(display2, OUTPUT);
  pinMode(display3, OUTPUT);
  digitalWrite(display1, 0);
  digitalWrite(display2, 0);
  digitalWrite(display3, 0);
  configurarPWM();
  attachInterrupt(Boton1, ISRB1, HIGH);
//**********************************************************************************************************************
// LOOP
//**********************************************************************************************************************
{
  if (estadoBoton == 1)
  {
    EMAADC();
    RSemaforoT();
    estadoBoton = 0;
  }
//**********************************************************************************************************************
// Fuinciones
//**********************************************************************************************************************

void EMAADC(void)
{
  adcRaw = analogReadMilliVolts(SensorT);
  adcFiltradoT = (alpha * adcRaw) + ((1.0 - alpha) * adcFiltradoT);
  temperatura = (adcFiltradoT / 10.0);
  Serial.println(temperatura);
  delay(100);
void configurarPWM(void)
{
  // Paso 1: configurar PWM
  ledcSetup(pwmChservo, freqPWM, resolucion);
  ledcSetup(pwmChledR, 60, resolucion);
  ledcSetup(pwmChledA, 60, resolucion);
  ledcSetup(pwmChledV, 60, resolucion);
  // Paso 2: Seleccionar en que GPIO tendremos nuestra onda PWM
  ledcAttachPin(pinPWMservo, pwmChservo);
  ledcAttachPin(ledR, pwmChledR);
  ledcAttachPin(ledA, pwmChledA);
  ledcAttachPin(ledV, pwmChledV);
}

  jjjjjjjj
void RSemaforoT(void)
{
  if (temperatura < 37.0)
  {
    ledcWrite(pwmChservo, 27); // Función que permite alterar el PWM de servo
    ledcWrite(pwmChledR, 0);
    ledcWrite(pwmChledA, 0);
    ledcWrite(pwmChledV, 200);
  }
  if (temperatura >= 37.0)
  {
    ledcWrite(pwmChservo, 17); // Función que permite alterar el PWM
    ledcWrite(pwmChledR, 0);
    ledcWrite(pwmChledA, 200);
    ledcWrite(pwmChledV, 0);
  }
  if (temperatura > 37.5)
  {                           // Condición que establece que el PWM de los 4 elementos sera 0.
    ledcWrite(pwmChservo, 7); // Función que permite alterar el PWM
    ledcWrite(pwmChledR, 200);
    ledcWrite(pwmChledA, 0);
    ledcWrite(pwmChledV, 0);
  }
}