#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(float base, float altoInclinado);
float area(float base, float altoInclinado, float anguloInferiorIzquierdo);

float perimetro(float base, float altoInclinado){
    return 2*(base + altoInclinado);
}

float area(float base, float altoInclinado, float anguloInferiorIzquierdo){
    anguloInferiorIzquierdo = anguloInferiorIzquierdo * (M_PI / 180.0);
    float altura = altoInclinado * (sin(anguloInferiorIzquierdo));
    return base * altura;
}

void paralelogramo(){
    float base;
    float altoInclinado;
    float anguloInferiorIzquierdo;

    printf("Ingrese las medidas correspondientes para armar el paralelogramo.\nBase: ");
    scanf("%f", base);
    printf("\nLado (el que esta inclinado): ");
    scanf("%f", altoInclinado);
    printf("\nAngulo inferior izquierdo (grados): ");
    scanf("%f", anguloInferiorIzquierdo);
    printf("\n");

    printf("El paralelogramo con las medidas otorgadas tiene como perimetro %f metros, mientras que su area es de %f metros cuadrados.\n", perimetro(base, altoInclinado), area(base, altoInclinado, anguloInferiorIzquierdo));
}