/*305. Construya un algoritmo que lea tres números enteros val1, num1 y m por teclado. Use una constante literal 3 para calcular el promedio. Asigne el resultado 
de la expresión aritmética ((val1 + num1 + m) / 3) a la variable promedio. Evalúe las expresiones relacionales (val1 > promedio), (num1 > promedio) y (m > promedio). 
Muestre por pantalla cuáles de los tres valores están por encima del promedio.*/

#include <stdio.h>

int main () {

    int constante = 3 ;
    int val1 = 0 ; 
    int num1 = 0 ; 
    int m = 0 ;
    int promedio = 0 ;

    printf("Ingrese el valor 1 (entero): ") ;
    scanf("%d", &val1) ;

    printf("Ingrese el valor 2 (entero): ") ;
    scanf("%d", &num1) ;

    printf("Ingrese el valor 3 (entero): ") ;
    scanf("%d", &m) ;

    promedio = ((val1 + num1 + m)/ constante ) ;

    if (val1 > promedio)
    {
        printf("El valor: %d, esta por encima del promedio \n", val1) ;
    }
    if (m > promedio)
    {
        printf("El valor: %d, esta por encima del promedio \n", m) ;
    }
    if (num1 > promedio)
    {
        printf("El valor: %d, esta por encima del promedio \n", num1) ;
    }
    
}