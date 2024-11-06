#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float area(float base, float altura);
float perimetro(float base, float altura);

float perimetro(float base, float altura){
    return 2*(base + altura);
}

float area(float base, float altura){
    return base*altura;
}

void rectangulo(){
    float base;
    float altura;

    printf("Ingrese las medidas correspondientes para construir el rectangulo.\nBase: ");
    scanf("%f", base);
    printf("\nAltura: ");
    scanf("%f", altura);
    printf("\n");

    printf("El rectangulo con las medidas proporcionadas posee un perimetro de %f metros, mientras que un area con %f metros cuadrados.\n", perimetro(base, altura), area(base, altura));
}