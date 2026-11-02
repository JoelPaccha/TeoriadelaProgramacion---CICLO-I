/*142. Construya un algoritmo que lea el nombre de un estudiante (cadena) y tres notas (reales). Use una constante simbólica APROBADO = 7.0 
como nota mínima de aprobación. Calcule el promedio con la expresión aritmética ((nota1 + nota2 + nota3) / 3). 
Evalúe la expresión relacional (promedio >= APROBADO). Muestre por pantalla un mensaje que incluya el nombre del estudiante, su promedio 
y su condición (aprobado o reprobado).*/

#include <stdio.h>

int main () {

    float APROBADO = 7.0 ;
    char nombre [50] ;
    float nota1 = 0.0 ;
    float nota2 = 0.0 ;
    float nota3 = 0.0 ;
    float promedio = 0.0 ;

    printf("Igrese el nombre: ") ;
    scanf("%49[^\n]",nombre);

    printf("Igrese nota 1: ") ;
    scanf("%f", &nota1) ;

    printf("Igrese nota 2: ") ;
    scanf("%f", &nota2) ;

    printf("Igrese nota 3: ") ;
    scanf("%f", &nota3) ;

    promedio = ((nota1 + nota2 + nota3)/3) ;

    if (promedio >= APROBADO)
    {
        printf("EL estudiante %s, con promedio de %.2f , APROBÓ\n", nombre, promedio) ;
    }
    else
    {
        printf("EL estudiante %s, con promedio de %.2f , REPROBÓ\n", nombre, promedio) ;
    }
   
    return 0 ;
}
