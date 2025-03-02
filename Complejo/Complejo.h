#ifndef _COMPLEJO_H_
#define _COMPLEJO_H_
#include <stdbool.h>
#include <math.h>

typedef struct Complejo {
    double real;
    double imaginaria;
} COMPLEJO;

COMPLEJO crea_complejo();
void asigna_real(COMPLEJO*, double);
void asigna_imaginaria(COMPLEJO*, double);
double parte_real(COMPLEJO);
double parte_imaginaria(COMPLEJO);
double modulo(COMPLEJO);
COMPLEJO suma(COMPLEJO, COMPLEJO);
void print_complejo(COMPLEJO);

#endif