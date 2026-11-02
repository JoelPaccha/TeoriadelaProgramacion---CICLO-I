/*401. Diseñe un algoritmo que declare una variable a (entero) y lea su valor por teclado. Use una constante simbólica LIMITE = 50. 
Evalúe la expresión lógica (a > 0 AND a < LIMITE). Asigne el resultado a una variable booleana es_valido. Evalúe también la 
expresión relacional (a == LIMITE / 2). Muestre por pantalla ambos resultados identificando cuál es dato y cuál es información.*/

#include <stdio.h>
#include <stdbool.h>

int main () {
    bool es_valido = false ;
    int Limite = 50 ; 
    int a = 0 ;

    printf("Ingrese un valor (entero): ") ;
    scanf("%d", &a) ;

    es_valido = (a > 0 && a < Limite) ;

    if (es_valido)
    {
        printf("EL número ingresado es válido \n") ;
    }
    else
    {
        printf("El número ingresado es inválido \n") ;
    }

    printf("LÍMITE = 50 \n") ;
    if (a == Limite / 2)
    {
        printf("El número ingresado es igual a la mitad del límite \n") ;
    }
    else 
    {
        printf("El número ingresado no es igual a la mitad del límite \n") ;
    }
    
    return 0 ;

}