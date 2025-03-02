#include <stdio.h>
#include "Complejo.h"

int main() {
    COMPLEJO c1, c2, c3;
    
    c1 = crea_complejo();
    c2 = crea_complejo();
    c3 = crea_complejo();

    asigna_real(&c1, 3.0);
    asigna_imaginaria(&c1, 4.0);
    asigna_real(&c2, 1.0);
    asigna_imaginaria(&c2, 2.0);

    print_complejo(c1);
    print_complejo(c2);

    printf("Parte real de c1: %f\n", parte_real(c1));
    printf("Parte imaginaria de c1: %f\n", parte_imaginaria(c1));
    printf("Módulo de c1: %f\n", modulo(c1));

    c3 = suma(c1, c2);
    print_complejo(c3);

    return 0;
}