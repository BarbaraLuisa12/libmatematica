#include <stdio.h>
#include <math.h>
#include "matematica.h"

#define ZERO 0.0000001

float calcular_seno (float angulo_radianos){
    float seno = sin(angulo_radianos);

    if(fabs(seno) > -ZERO && fabs(seno) < ZERO)
        return 0;
    else 
        return seno;
}

float calcular_cosseno (float angulo_radianos){
    float cosseno = cos(angulo_radianos);

    if(fabs(cosseno) > -ZERO && fabs(cosseno) < ZERO){
        return 0;
    }else
    return cosseno;
}

float calcular_tangente(float angulo_radianos){
    float tangente = tan(angulo_radianos);
    float cosseno = cos(angulo_radianos);

    if(fabs(tangente) < ZERO){
        return 0;
    }else if (cosseno < ZERO){
        return NAN;
    }else
    return tangente;
}