#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"

float superficie(float alturaLateral, float radioBases);
float volumen(float alturaLateral, float radioBases);

float superficie(float alturaLateral, float radioBases){
    float sLateral = 2 * M_PI * radioBases * alturaLateral;
    float sBases = 2 * M_PI * pow(radioBases, 2);
    return sLateral + sBases;
}

float volumen(float alturaLateral, float radioBases){
    return M_PI * pow(radioBases, 2) *alturaLateral;
}

void cilindroRecto(){
    float alturaLateral;
    float radioBases;

    printf("Ingrese las medidas correspondientes para armar el cilindro recto.\nAltura: ");
    scanf("%f", alturaLateral);
    printf("\nRadio de las bases: ");
    scanf("%f", radioBases);
    printf("\n");

    printf("El clindro recto con las medidas proporcionadas tiene una superficie de %f metros cuadrados, mientras que un volumen con %f emtros cubicos.\n", superficie(alturaLateral, radioBases), volumen(alturaLateral, radioBases));
}