#include <stdio.h>
#include "matematica.h"

#define PI 3.141592653

int main(){

/*Chamada de funções para calculo de seno, cosseno e tangente.
Use PI para representar π e colocar os parâmetros de entrada em radianos.*/

    float seno = calcular_seno((PI/2));
    float cosseno = calcular_cosseno((PI/2));
    float tangente = calcular_tangente((PI/2)); 

    printf("Seno: %f \n", seno);
    printf("Cosseno: %f\n", cosseno);
    printf("Tangente: %f\n", tangente);

    return 0;
}