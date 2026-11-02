/*406. Construya un algoritmo que declare una variable entera z. Asigne el valor literal 50. Lea otra variable entera dato2 por teclado. 
Use una constante simbólica MAXIMO = 100. Evalúe la expresión lógica (z + dato2 <= MAXIMO AND z > 0 AND dato2 > 0). 
Calcule la expresión aritmética (z * dato2) y asígnela a producto. Muestre por pantalla el producto y el resultado de la expresión lógica.*/

#include <stdio.h>

int main () { 
    int maximo = 100 ;
    int z = 50 ;
    int producto = 0 ;
    int dato2 = 0 ;

    printf("Ingrese un valor entero: ") ;
    scanf("%d", &dato2) ;

    if (z + dato2 <= maximo && z > 0 && dato2 > 0) 
    {
        printf("Valor ingresado válido \n") ;
        producto = (z * dato2) ;
        printf("El producto es: %d \n", producto) ;
    }
    else
    {
        printf("EL valor ingresado es inválido \n");
    }
    
    return 0 ;

}
