#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(float radio);
float area(float radio);

float perimetro(float radio){
    return 2 * M_PI * radio;
}

float area(float radio){
    return M_PI * pow(radio, 2);
}

void circulo(){
    float radio;

    printf("Ingrese la medida correspondiente para construir el circulo.\nRadio: ");
    scanf("%f", radio);
    printf("\n");

    printf("El circulo con el radio proporcionado tiene un perimetro de %f metros, mientras que su area es de %f metros cuadrados.", perimetro(radio), area(radio));
}
