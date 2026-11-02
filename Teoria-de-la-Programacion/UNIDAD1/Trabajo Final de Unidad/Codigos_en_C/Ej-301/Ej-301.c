/*301. Construya un algoritmo que lea un carácter desde teclado y lo almacene en la variable y. Use una constante literal '5' como carácter de referencia. 
Evalúe las expresiones lógicas: (y == '5'), (y >= 'A' AND y <= 'Z') y (y >= '0' AND y <= '9'). Muestre por pantalla un mensaje indicando si el carácter ingresado 
es igual al de referencia, si es letra mayúscula o si es dígito. Identifique el tipo de dato de cada variable.*/

#include <stdio.h>

int main () {

    char literal = '5' ;
    char y = ' ' ;

    printf("Caracter de referencia: '5'\n") ;
    printf("Ingrese un caracter o letra MAYÚSCULA: \n") ;
    scanf(" %c", &y) ;

    if (y == literal)
    {
        printf("Caracter igual al de referencia \n");
    }
    if (y >= 'A' && y <= 'Z')
    {
        printf("El caracter ingresado es una letra MAYÚSCULA \n") ;
    }
    if (y >= '0' && y <= '9')
    {
        printf("El caracter ingresado es un dígito \n") ;
    }

    return 0 ;
}

