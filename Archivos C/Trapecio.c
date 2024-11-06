#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(float baseMenor, float baseMayor, float ladosCongruentes);
float area(float baseMenor, float baseMayor, float ladosCongruentes, float anguloInferiorIzquierdo);

float perimetro(float baseMenor, float baseMayor, float ladosCongruentes){
    return baseMenor + baseMayor + (2*ladosCongruentes);
}

float area(float baseMenor, float baseMayor, float ladosCongruentes, float anguloInferiorIzquierdo){
    anguloInferiorIzquierdo = anguloInferiorIzquierdo * (M_PI / 180.0);
    float altura = ladosCongruentes * (sin(anguloInferiorIzquierdo));
    return ((baseMayor + baseMenor) * altura) / 2;
}

void trapecio(){
    float baseMenor;
    float baseMayor;
    float ladosCongruentes;
    float anguloInferiorIzquierdo;

    printf("Ingrese las medidas correspondientes para el trapecio.\n");
    printf("Base menor: ");
    scanf("%f", baseMenor);
    printf("\nBase mayor: ");
    scanf("%f", baseMayor);
    printf("\nLaterales congruentes: ");
    scanf("%f", ladosCongruentes);
    printf("\nAngulo inferior izquierdo (grados): ");
    scanf("%f", anguloInferiorIzquierdo);
    printf("\n");

    printf("El trapecio con las medidas solicitadas tiene como perimetro %f metros, mientras que el area es de %f metros cuadrados.\n", perimetro(baseMenor, baseMayor, ladosCongruentes), area(baseMenor, baseMayor, ladosCongruentes, anguloInferiorIzquierdo));
}
