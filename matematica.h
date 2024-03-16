#ifndef MATEMATICA_H
#define MATEMATICA_H

/**
 * Calcula o seno de um ângulo. O ângulo deve ser informado em radianos. 
 * Na função, o valor absoluto do seno é comparado a ZERO, uma constante global para evitar o retorno de 0 negativo. 
 * 
 * @param angulo Ângulo em radianos.
 * @return O seno do ângulo informado. 
 *         Se o valor absoluto do seno for muito próximo de zero (menor que 0.0000001), a função retorna 0 para evitar o retorno de -0 (inexistente).
*/
float calcular_seno(float angulo);

/**
 * Calcula o cosseno de um ângulo. O ângulo deve ser informado em radianos.  
 * 
 * @param angulo Ângulo em radianos.
 * @return O cosseno do ângulo informado. 
 *         Se o valor absoluto do cosseno for muito próximo de zero (menor que 0.0000001), a função retorna 0 para evitar o retorno de -0 (inexistente).
*/
float calcular_cosseno(float angulo);

/**
 * Calcula a tangente de um ângulo. O ângulo deve ser informado em radianos. 
 * 
 * @param angulo Ângulo em radianos.
 * @return A tangente do ângulo informado.
 *         Se o valor absoluto da tangente for muito próximo de zero (menor que 0.0000001), a função retorna 0 para evitar o retorno de -0 (inexistente).
 *         Se o cosseno do ângulo for muito próximo de 0, a tangente tende ao infinito. Assim, retorna-se "nan" para indicar que a tangente é indefinida. 
*/
float calcular_tangente(float angulo);

#endif 