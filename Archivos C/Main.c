#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Voids.h"
#include <ctype.h>
#include <time.h>

#define MAX_LENGTH 100

void getCurrentDate(char *date) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    sprintf(date, "%d/%02d/%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
}

void logActivity(const char *username, const char *action) {
    FILE *logFile = fopen("bitacora.txt", "a");
    if (logFile == NULL) {
        printf("Error al abrir el archivo de bitácora\n");
        return;
    }
    
    char date[11];
    getCurrentDate(date);
    fprintf(logFile, "%s: %s – %s\n", date, username, action);
    fclose(logFile);
}

int validateLogin(const char *username, const char *password) {
    FILE *userFile = fopen("usuarios.txt", "r");
    if (userFile == NULL) {
        printf("Error al abrir el archivo de usuarios\n");
        return 0;
    }
    
    char line[MAX_LENGTH];
    char storedUser[MAX_LENGTH], storedPass[MAX_LENGTH];
    int valid = 0;
    
    while (fgets(line, sizeof(line), userFile)) {
        sscanf(line, "%s %s", storedUser, storedPass);
        if (strcmp(username, storedUser) == 0 && strcmp(password, storedPass) == 0) {
            valid = 1;
            break;
        }
    }
    
    fclose(userFile);
    return valid;
}

int main() {
    char username[MAX_LENGTH], password[MAX_LENGTH];
    char fin[2];
    int loginSuccess = 0;
    
    printf("Bienvenido al sistema de análisis de figuras geométricas.\n\n");
    
    // Proceso de login
    do {
        printf("Usuario: ");
        scanf("%s", username);
        printf("Contraseña: ");
        scanf("%s", password);
        
        loginSuccess = validateLogin(username, password);
        
        if (loginSuccess) {
            logActivity(username, "Ingreso exitoso al sistema");
            printf("\n¡Bienvenido %s!\n\n", username);
        } else {
            logActivity(username, "Ingreso fallido usuario/clave erróneo");
            printf("Usuario o contraseña incorrectos. Por favor intente nuevamente.\n\n");
        }
    } while (!loginSuccess);
    
    do {
        int figura;
        
        printf("Esta es la lista de figuras que puede escoger:\n"
               "1. Triangulo\n2. Cuadrado\n3. Circulo\n4. Rectangulo\n"
               "5. Paralelogramo\n6. Rombo\n7. Trapecio\n8. Poligono regular\n"
               "9. Cubo\n10. Cuboide\n11. Esfera\n12. Cilindro recto\n"
               "13. Cono circular recto\n"
               "Para elegir una, ingrese el numero con el que aquella aparece en la lista: ");
        scanf("%d", &figura); 
        printf("\n");
        
        switch(figura) {
            case 1:
                logActivity(username, "Triángulo");
                triangulos();
                break;
            case 2:
                logActivity(username, "Cuadrado");
                cuadrado();
                break;
            case 3:
                logActivity(username, "Círculo");
                circulo();
                break;
            case 4:
                logActivity(username, "Rectángulo");
                rectangulo();
                break;
            case 5:
                logActivity(username, "Paralelogramo");
                paralelogramo();
                break;
            case 6:
                logActivity(username, "Rombo");
                rombo();
                break;
            case 7:
                logActivity(username, "Trapecio");
                trapecio();
                break;
            case 8:
                logActivity(username, "Polígono Regular");
                poligonoRegular();
                break;
            case 9:
                logActivity(username, "Cubo");
                cubo();
                break;
            case 10:
                logActivity(username, "Cuboide");
                cuboide();
                break;
            case 11:
                logActivity(username, "Esfera");
                esfera();
                break;
            case 12:
                logActivity(username, "Cilindro Recto");
                cilindroRecto();
                break;
            case 13:
                logActivity(username, "Cono Circular Recto");
                conoCircularRecto();
                break;
            default:
                printf("Ingrese un número válido dentro de la lista de las figuras proporcionadas.\n");
        }
        
        printf("\n¿Desea continuar con el análisis de otras figuras? (Si/No) -----> ");
        scanf("%s", fin);
        for (int i = 0; i < strlen(fin); i++) {
            fin[i] = tolower(fin[i]);
        }
        
    } while (strcmp("si", fin) == 0);
    
    logActivity(username, "Salida del sistema");
    
    return 0;
}