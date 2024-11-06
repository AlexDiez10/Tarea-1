#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float superficie(float radioBase, float alturaCono);
float volumen(float radioBase, float alturaCono);

float superficie(float radioBase, float alturaCono){
    float generatriz = sqrt(pow(radioBase, 2) + pow(alturaCono, 2));
    float sBase = M_PI * pow(radioBase, 2);
    float sLateral = M_PI * radioBase * generatriz;
    return sBase + sLateral;
}

float volumen(float radioBase, float alturaCono){
    return (M_PI * pow(radioBase, 2) * alturaCono) / 3;
}

void conoCircularRecto(){
    float radioBase;
    float alturaCono;

    printf("Ingrese las medidas correspondientes para armar el cilindro recto.\nRadio de la base: ");
    scanf("%f", radioBase);
    printf("\nAltura del cono: ");
    scanf("%f", alturaCono);
    printf("\n");

    printf("El cono circular recto con las medidas otorgadas tiene una superficie de %f metros cuadrados, ademas de un volumen con %f metros cubicos.\n", superficie(radioBase, alturaCono), volumen(radioBase, alturaCono));
}