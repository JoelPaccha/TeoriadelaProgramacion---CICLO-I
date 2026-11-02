/*529. Construya un algoritmo que lea la velocidad en m/s (real) y la convierta a km/h. Use una constante simbólica CONVERSION = 3.6. 
Calcule con la expresión aritmética (velocidad_ms * CONVERSION) y asígnela a velocidad_kmh. Evalúe la expresión relacional (velocidad_kmh > 100) 
para identificar si supera el límite de velocidad. Muestre por pantalla el resultado con un mensaje claro.*/

#include <stdio.h>

int main () {

    float CONVERSION = 3.6 ; 
    float velocidad_ms = 0.0 ;
    float velocidad_kmh = 0.0 ;

    printf("Ingrese la velocidad en m/s: ") ;
    scanf("%f", &velocidad_ms) ;

    velocidad_kmh = (velocidad_ms * CONVERSION) ;

    printf("La velocidad en Km/h es: %.2f \n", velocidad_kmh) ;

    if (velocidad_kmh > 100)
    {
        printf ("Límite de velocidad superado. \n") ;
    }
    else
    {
        printf ("Límite de velocidad no superado. \n") ;
    }
    
    return 0 ;

}