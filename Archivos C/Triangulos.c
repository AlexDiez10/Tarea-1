#include <stdio.h>
#include <string.h>
#include <math.h>

float perimetroEquilatero(float ladosCongruentes);
float perimetroIsosceles(float ladosCongruentes, float base);
float perimetroRectangulo(float cateto1, float cateto2, float hipotenusa);
float areaEquilatero(float ladosCongruentes);
float areaIsosceles(float ladosCongruentes, float base);
float areaRectangulo(float cateto1, float cateto2);
void triangulos();

float areaRectangulo(float cateto1, float cateto2){
    return (cateto1*cateto2) / 2;
}

float areaIsosceles(float ladosCongruentes, float base){
    return ((base/4)*(sqrt((4*(pow(ladosCongruentes, 2))) - (pow(base, 2)))));
}

float areaEquilatero(float ladosCongruentes){
    return (sqrt(3)/4)*(pow(ladosCongruentes, 2));
}

float perimetroRectangulo(float cateto1, float cateto2, float hipotenusa){
    return cateto1 + cateto2 + hipotenusa;
}

float perimetroIsosceles(float ladosCongruentes, float base){
    return (2*ladosCongruentes) + base;
}

float perimetroEquilatero(float ladosCongruentes){
    return ladosCongruentes*3;
}

void triangulos(){
    float lado1;
    float lado2;
    float lado3;
    printf("Ingrese la medida de cada uno de los lados del triangulo.\n");
    printf("Lado 1: ");
    scanf("%f", lado1);
    printf("\nLado 2: ");
    scanf("%f", lado2);
    printf("\nLado 3: ");
    scanf("%f", lado3);
    printf("\n");

    if ((lado1 == lado2) && (lado1 == lado3)){
        printf("El triangulo es equilatero, por lo tanto su perimetro es %f metros, mientras que su area es de %f metros cuadrados.\n", perimetroEquilatero(lado1), areaEquilatero(lado1));
    } else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
        printf("El trinagulo es isosceles, por lo tanto su perimetro es ");
        if (lado1 == lado2){
            printf("%f metros, mientras que su area es de %f metros cuadrados.\n", perimetroIsosceles(lado1, lado3), areaIsosceles(lado1, lado3)); 
        } else if (lado1 == lado3){
            printf("%f metros, mientras que su area es de %f metros cuadrados.\n", perimetroIsosceles(lado1, lado2), areaIsosceles(lado1, lado2));
        } else {
            printf("%f metros, mientras que su area es de %f metros cuadrados.\n", perimetroIsosceles(lado2, lado1), areaIsosceles(lado2, lado1));
        }
    } else {
        float hipotenusa;
        if ((lado1 > lado2) && (lado1 > lado3)){
            hipotenusa = sqrt(pow(lado2, 2) + pow(lado3, 2));
            if (hipotenusa == lado1){
                printf("El triangulo es rectangulo, por lo tanto su perimetro es %f metros, mientras que su area es de %f metros cuadrados.\n", perimetroRectangulo(lado2, lado3, lado1), areaRectangulo(lado2, lado3));
            }
        }  else if ((lado2 > lado3) && (lado2 > lado1)){
            hipotenusa = sqrt(pow(lado3, 2) + pow(lado1, 2));
            if (hipotenusa == lado2){
                printf("El triangulo es rectangulo, por lo tanto su perimetro es %f metros, mientras que su area es de %f metros cuadrados.\n", perimetroRectangulo(lado1, lado3, lado2), areaRectangulo(lado1, lado3));
            }
        } else if ((lado3 > lado1) && (lado3 > lado2)){
            hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
            if (hipotenusa == lado3){
                printf("El triangulo es rectangulo, por lo tanto su perimetro es %f metros, mientras que su area es de %f metros cuadrados.\n", perimetroRectangulo(lado1, lado2, lado3), areaRectangulo(lado1, lado2));
            }
        } else {
            printf("El triangulo con las medidas otorgadas no existe.\n");
        }
    }
}