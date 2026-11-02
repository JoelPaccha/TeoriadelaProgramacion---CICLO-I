/*215. Declare una variable entera dato2 y asígnele el valor literal 100. Lea otra variable entera p por teclado. Calcule la expresión 
aritmética (dato2 * p + dato2 - p) y asígnela a una variable resultado. Luego evalúe la expresión relacional (resultado >= 0) 
y la expresión lógica (resultado > 100 OR dato2 > p). Muestre todos los valores por pantalla.*/

#include <stdio.h>

int main () {

    int dato2 = 100 ;
    int p = 0 ;
    int resultado = 0 ;

    printf("Ingrese un número entero: ") ;
    scanf("%d", &p) ;


    resultado = (dato2 * p + dato2 - p) ;

    printf("Dato 2: %d\n", dato2 );
    printf("Valor ingresado: %d\n", p );

    if (resultado >= 0)
    {
        printf("Valores Correctos\n") ;
        printf("El resultado es: %d\n", resultado) ;
    }
    if (resultado > 100 || dato2 > p)
    {
        printf("El resultado es mayor a 100 o el número ingresado es menor a 100\n") ;
    }
    
    return 0 ;

} 