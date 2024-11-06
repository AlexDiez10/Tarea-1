#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(float ladosCongruentes);
float area(float ladosCongruentes);

float perimetro(float ladosCongruentes){
    return 4*ladosCongruentes;
}

float area(float ladosCongruentes){
    return pow(ladosCongruentes, 2);
}

void cuadrado(){
    float ladosCongruentes;

    printf("Ingrese la medida correspondiente para armar el cuadrado.\nLados congruentes: ");
    scanf("%f", ladosCongruentes);
    printf("\n");

    printf("El cuadrado con las medidas otorgadas presenta su perimetro con %f metros, mientras que su area es de %f metros cuadrados.\n", perimetro(ladosCongruentes), area(ladosCongruentes));
}