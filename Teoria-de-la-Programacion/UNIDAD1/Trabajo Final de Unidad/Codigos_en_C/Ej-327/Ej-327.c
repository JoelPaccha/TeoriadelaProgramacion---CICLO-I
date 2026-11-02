/*327. Construya un algoritmo que lea dos números reales num2 y y desde el teclado. Use una constante simbólica llamada UMBRAL con valor 0.5 
para representar un factor de conversión. Calcule la expresión aritmética: ((num2 + y) * UMBRAL) / 2. Asigne el resultado a una variable llamada 
resultado. Muestre por pantalla el valor obtenido junto con un mensaje descriptivo. Explique qué tipo de dato simple debe usar para cada variable 
y por qué.*/

#include <stdio.h>

int main () {

    float num2 = 0.0 ;
    float y = 0.0 ;
    float UMBRAL = 0.5 ;
    float resultado = 0.0 ;

    printf("Ingrese un número (real): ") ;
    scanf("%f", &num2) ;

    printf("Ingrese otro número (real): ") ;
    scanf("%f", &y) ;

    resultado = ((num2 + y) * UMBRAL) / 2 ;

    printf("El resultado de la transformación es: %.2f\n", resultado) ;
    
    return 0 ;

}