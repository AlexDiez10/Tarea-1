#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float superficie(float ladosCongruentes);
float volumen(float ladosCongruentes);

float superficie(float ladosCongruentes){
    return 6 * pow(ladosCongruentes, 2);
}

float volumen(float ladosCongruentes){
    return pow(ladosCongruentes, 3);
}

void cubo(){
    float ladosCongruentes;

    printf("Ingrese la medida correspondiente para armar el cubo.\nLados congruentes: ");
    scanf("%f", ladosCongruentes);
    printf("\n");
    
    printf("El cubo con las medidas proporcionadas posee una supercicie de %f metros cuadrados, mientras qye un volumen de %f metros cubicos.\n", superficie(ladosCongruentes), volumen(ladosCongruentes));
}