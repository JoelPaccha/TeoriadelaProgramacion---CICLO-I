/*227. En un cine, cree un algoritmo que lea tres temperaturas (reales, en °C). Use la constante literal 3 como divisor. Calcule el promedio con la expresion aritmetica ((t1 + t2 + t3) / 3) y asignelo a promedio. Evalúe la expresion logica (promedio > -273.15). Muestre por pantalla la temperatura promedio. Ademas, determine si el resultado es par o impar (cuando aplique). Asegurese de que las expresiones logicas esten bien parentizadas.*/

#include <stdio.h>
#include <math.h>

int main ()  {
    int constante = 3 ;
    float t1 = 0.0 ;
    float t2 = 0.0 ;
    float t3 = 0.0 ;
    float promedio = 0.0 ;

    printf("Ingrese la temperatura 1 en °C: ") ;
    scanf("%f", &t1) ;

    printf("Ingrese la temperatura 2 en °C: ") ;
    scanf("%f", &t2) ;

    printf("Ingrese la temperatura 3 en °C: ") ;
    scanf("%f", &t3) ;

    promedio = ((t1 + t2 + t3)/constante) ;
    
    printf("La temperatura promedio es: %.2f °C\n", promedio) ;

    if (promedio > -273.15)
    {
        printf("La temperatura es mayor a -273.15\n") ;
    }
    else if (promedio < -273.15)
    {
        printf("La temperatura es menor a -273.15\n") ;
    }
    
    else
    {
        printf("La temperatura es igual a -273.15\n") ;
    }

    if (trunc(promedio)==promedio)
    {
        if (((int)promedio%2)==0)
        {
            printf("El promedio es par\n") ;
        }
        else
        {
            printf("El promedio es impar\n") ;
        }
        
    }
    else
    {
        printf("No aplica par ni impar puesto que es decimal \n") ;
    }
    
    return 0 ;
}