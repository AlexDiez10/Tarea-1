#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float superficie(float radio);
float volumen(float radio);

float superficie(float radio){
    return 4 * M_PI * pow(radio, 2);
}

float volumen(float radio){
    return (4 * M_PI * pow(radio, 3)) / 3;
}

void esfera(){
    float radio;

    printf("Ingrese la medida correspondiente para construir la esfera.\nRadio: ");
    scanf("%f", radio);
    printf("\n");

    printf("La esfera con el radio proporcionado tiene como superficie %f metros cuadrados, mientras que un volumen de %f metros cubicos.\n", superficie(radio), volumen(radio));
}