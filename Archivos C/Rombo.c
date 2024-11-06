#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float perimetro(float ladosCongruentes);
float area(float ladosCongruentes, float anguloInferiorIzquierdo);

float perimetro(float ladosCongruentes){
    return 4*ladosCongruentes;
}

float area(float ladosCongruentes, float anguloInferirorIzquierdo){
    anguloInferirorIzquierdo = anguloInferirorIzquierdo * (M_PI/180.0);
    float altura = ladosCongruentes * (sin(anguloInferirorIzquierdo));
    return ladosCongruentes * altura;
}

void rombo(){
    float ladosCongruentes;
    float anguloInferiorIzquierdo;

    printf("Ingrese las medidas correspondientes para armar el rombo.\n");
    printf("Lados congruentes: ");
    scanf("%f", ladosCongruentes);
    printf("\nAngulo inferior izquierdo (grados): ");
    scanf("%f", anguloInferiorIzquierdo);
    printf("\n");

    printf("El rombo con las medidas solicitadas posee un perimetro de %f metros, mientras que un area con %f metros cuadrados.\n", perimetro(ladosCongruentes), area(ladosCongruentes, anguloInferiorIzquierdo));
}