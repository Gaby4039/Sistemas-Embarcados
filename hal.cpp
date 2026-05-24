#include <Arduino.h>

#include "../../common/hal.h"


// ==============================
// DEFINIÇÃO DOS PINOS
// ==============================

// Sensores

#define PIN_S11 2
#define PIN_S12 3

#define PIN_S21 4
#define PIN_S22 5

#define PIN_S31 6
#define PIN_S32 7


// Atuadores

#define PIN_V1 8
#define PIN_V2 9

#define PIN_B1 10

#define PIN_R1 11


// Temperatura

#define PIN_ST1 A0



// INICIALIZAÇÃO DA HAL

void init_hal()
{
    // Entradas digitais

    pinMode(PIN_S11, INPUT);
    pinMode(PIN_S12, INPUT);

    pinMode(PIN_S21, INPUT);
    pinMode(PIN_S22, INPUT);

    pinMode(PIN_S31, INPUT);
    pinMode(PIN_S32, INPUT);


    // Saídas digitais

    pinMode(PIN_V1, OUTPUT);
    pinMode(PIN_V2, OUTPUT);

    pinMode(PIN_B1, OUTPUT);

    pinMode(PIN_R1, OUTPUT);


    // Estado inicial dos atuadores

    digitalWrite(PIN_V1, LOW);
    digitalWrite(PIN_V2, LOW);

    digitalWrite(PIN_B1, LOW);

    digitalWrite(PIN_R1, LOW);
}


// LEITURA DOS SENSORES

bool s11()
{
    return digitalRead(PIN_S11);
}

bool s12()
{
    return digitalRead(PIN_S12);
}

bool s21()
{
    return digitalRead(PIN_S21);
}

bool s22()
{
    return digitalRead(PIN_S22);
}

bool s31()
{
    return digitalRead(PIN_S31);
}

bool s32()
{
    return digitalRead(PIN_S32);
}


// CONTROLE DOS ATUADORES

void set_v1(bool state)
{
    if (state)
    {
        digitalWrite(PIN_V1, HIGH);
    }
    else
    {
        digitalWrite(PIN_V1, LOW);
    }
}


void set_v2(bool state)
{
    if (state)
    {
        digitalWrite(PIN_V2, HIGH);
    }
    else
    {
        digitalWrite(PIN_V2, LOW);
    }
}


void set_b1(bool state)
{
    if (state)
    {
        digitalWrite(PIN_B1, HIGH);
    }
    else
    {
        digitalWrite(PIN_B1, LOW);
    }
}


void set_r1(bool state)
{
    if (state)
    {
        digitalWrite(PIN_R1, HIGH);
    }
    else
    {
        digitalWrite(PIN_R1, LOW);
    }
}


// TEMPERATURA

float get_st1()
{
    int valorLido = analogRead(PIN_ST1);

    float temperatura =
        40.0 + (valorLido / 1023.0) * 20.0;

    return temperatura;
}


// TEMPO 

uint32_t now()
{
    return millis();
}

// ESTADOS DE ERRO

void set_sm1_error(bool state) {}

void set_sm2_error(bool state) {}

void set_sm3_error(bool state) {}

void set_sm4_error(bool state) {}
