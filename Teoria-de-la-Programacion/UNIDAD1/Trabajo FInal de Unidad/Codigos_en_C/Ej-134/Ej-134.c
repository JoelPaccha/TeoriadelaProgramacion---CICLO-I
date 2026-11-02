/*134. Declare una variable entera y y una constante simbólica IVA = 1.5. Lea y desde teclado. Calcule la expresión aritmética (y % IVA) 
y asígnela a residuo. Evalúe la expresión lógica (residuo == 0 AND y > 0) y muestre por pantalla el mensaje correspondiente. 
Identifique claramente cuál es el dato de entrada y cuál es la información procesada.*/

#include <stdio.h>
#include <math.h>

int main() {
    float IVA = 1.5 ;
    int y = 0 ;
    float residuo = 0.0 ;
    
    printf("Ingese un número entero: ") ;
    scanf("%d", &y) ;

    residuo = fmod (y,IVA) ;

    if (residuo == 0 && y > 0) 
    {
        printf("El valor %d es mayor que 0, y el residuo %.2f es igual a 0\n", y, residuo) ;
    }
    else
    {
        printf ("Los valores no cumplen la condición \n") ;
    
    }
    
    return 0 ;
}  