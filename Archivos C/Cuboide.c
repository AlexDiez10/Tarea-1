#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float superficie(float longitud, float ancho, float altura);
float volumen(float longitud, float ancho, float altura);

float superficie(float longitud, float ancho, float altura){
    return 2 * (longitud + ancho + altura);
}

float volumen(float longitud, float ancho, float altura){
    return longitud * ancho * altura;
}

void cuboide(){
    float longitud;
    float ancho;
    float altura;

    printf("Ingrese las medidas correspondientes para armar el cuboide.\nLongitud: ");
    scanf("%f", longitud);
    printf("\nAncho: ");
    scanf("%f", ancho);
    printf("\nAltura: ");
    scanf("%f", altura);
    printf("\n");

    printf("El cuboide con las medidas insertadas tiene como superficie %f metros cuadrados, mientras que posee un volumen %f metros cubicos.\n", superficie(longitud, ancho, altura), volumen(longitud, ancho, altura));
}