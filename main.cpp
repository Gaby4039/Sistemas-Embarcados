/*
 * template_arduino_se.cpp
 *
 * Traditional embedded C/C++ programming style, without the setup() and loop() functions.
 * Author: afonsomiguel
 */

// Including the main Arduino framework header is still necessary.
#include <Arduino.h>

#include "../../common/behavior.h"

int main(void)
{
    // Inicializa Arduino

    init();

    // Executa comportamento do sistema

    behavior();

    return 0;
}
