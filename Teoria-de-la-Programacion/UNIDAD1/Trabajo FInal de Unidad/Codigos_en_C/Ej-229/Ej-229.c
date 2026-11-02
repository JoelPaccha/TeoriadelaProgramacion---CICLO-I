/*229. Cree un algoritmo que declare las variables num2 (entero), dato2 (real) y num1 (carácter). Lea tres valores por teclado en el orden: entero, real y carácter. 
Evalúe la expresión lógica (num2 > 0 AND dato2 > 0.0 AND num1 != ' '). Muestre por pantalla un mensaje indicando si todos los valores son válidos (positivos y no vacíos). 
Identifique el tipo de dato simple de cada variable.*/

#include <stdio.h>

int main () {

int num2 = 0 ;
float dato2 = 0.0 ;
char num1 = 'a' ;

printf("Ingrese un numero entero: ") ;
scanf("%d", &num2) ;

printf("Ingrese un numero real: ") ;
scanf("%f%*c", &dato2) ;

printf("Ingrese un caracter: ") ;
scanf("%c", &num1) ;

if (num2 > 0 && dato2 > 0.0 && num1 != ' ' && num1 != '\n')
{
    printf("Todos los valores son válidos, son positivos y no contienen vacíos \n") ;
}
else
{
    printf("Algún valor es inválido, (negativo o vacíos)\n") ;
}

return 0 ;

}