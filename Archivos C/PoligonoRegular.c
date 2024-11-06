#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(int nLados, float ladosCongruentes);
float area(int nLados, float ladosCongruentes);

float perimetro(int nLados, float ladosCongruentes){
    return nLados * ladosCongruentes;
}

float area(int nLados, float ladosCongruentes){
    float apotema = (ladosCongruentes / (2 * (tan(M_PI / nLados))));
    return ((perimetro(nLados, ladosCongruentes) * apotema) / 2);
}

void poligonoRegular(){
    int nLados;
    float ladosCongruentes;

    printf("Ingrese los datos correspondientes para construir el poligono regular.\nNumero de lados: ");
    scanf("%i", nLados);
    printf("\nMedida de los lados: ");
    scanf("%f", ladosCongruentes);
    printf("\n");

    printf("El poligono regular con las medidas insertadas tiene un perimetro de %f metros, mientras que su area cuenta con %f metros cuadrados.\n", perimetro(nLados, ladosCongruentes), area(nLados, ladosCongruentes));
}