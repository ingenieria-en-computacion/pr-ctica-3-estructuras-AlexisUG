#include "Complejo.h"
#include <stdio.h>

COMPLEJO crea_complejo() {
    COMPLEJO c;
    c.real = 0.0;
    c.imaginaria = 0.0;
    return c;
}

void asigna_real(COMPLEJO* c, double r) {
    c->real = r;
}

void asigna_imaginaria(COMPLEJO* c, double i) {
    c->imaginaria = i;
}

double parte_real(COMPLEJO c) {
    return c.real;
}

double parte_imaginaria(COMPLEJO c) {
    return c.imaginaria;
}

double modulo(COMPLEJO c) {
    return sqrt(c.real * c.real + c.imaginaria * c.imaginaria);
}

COMPLEJO suma(COMPLEJO c1, COMPLEJO c2) {
    COMPLEJO resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginaria = c1.imaginaria + c2.imaginaria;
    return resultado;
}

void print_complejo(COMPLEJO c) {
    printf("%f + %fi\n", c.real, c.imaginaria);
}