/*532. Construya un algoritmo que lea dos números reales dato1 y n desde el teclado. Use una constante simbólica llamada 
CONSTANTE con valor 0.1 para representar un factor de conversión. Calcule la expresión aritmética: ((dato1 + n) * CONSTANTE) / 2. 
Asigne el resultado a una variable llamada resultado. Muestre por pantalla el valor obtenido junto con un mensaje descriptivo. 
Explique qué tipo de dato simple debe usar para cada variable y por qué.*/

#include <stdio.h>

int main () {

    float CONSTANTE = 0.1 ;
    float resultado = 0.0 ;
    float dato1 = 0.0 ; 
    float n = 0.0 ;

    printf("Ingrese un valor real: ") ;
    scanf("%f", &dato1) ;

    printf("Ingrese otro valor real: ") ;
    scanf("%f", &n) ;

    resultado = ((dato1 + n) * CONSTANTE) / 2 ;

    printf("El resultado con el factor de conversión (0.1) es: %.2f \n", resultado) ;

    return 0 ;

}