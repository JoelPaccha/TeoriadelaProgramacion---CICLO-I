/*431. Declare tres variables enteras llamadas x, a y val2. Solicite al usuario que ingrese tres números enteros por teclado (lectura) 
y almacénelos en dichas variables. Calcule la suma, el producto y el promedio (expresión aritmética) usando una constante literal 25 
para representar la cantidad de elementos. Finalmente, muestre por pantalla (escritura) un mensaje informativo que indique: 
"La suma es X, el producto es Y y el promedio es Z". Identifique claramente el tipo de dato de cada variable (entero, real) 
y justifique por qué el promedio debe declararse como real.*/

#include <stdio.h>

int main () {

    int cantidad_elementos = 3 ;
    int X = 0;
    int Y = 0 ;
    float Z = 0.0 ;
    int x = 0 ;
    int a = 0 ; 
    int val2 = 0;

    printf("Ingrese un número entero: ") ;
    scanf("%d", &x) ;
 
    printf("Ingrese otro número entero: ") ;
    scanf("%d", &a) ;

    printf("Ingrese otro número entero: ") ;
    scanf("%d", &val2) ;

    X = x + a + val2 ;
    Y = (x * a * val2) ;
    Z = (float)(x + a + val2 ) / cantidad_elementos ;

    printf("La suma es: %d , el producto es: %d y el promedio es: %.2f \n", X, Y, Z) ;

    return 0 ;


}