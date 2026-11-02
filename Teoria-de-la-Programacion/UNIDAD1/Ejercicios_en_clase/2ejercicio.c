#include <stdio.h>

int main () {

    float DENSIDAD = 1000.0 ;
    float GRAVEDAD = 9.81 ;
    float PRESIÓN = 101325.0 ;
    float profundidad = 0.0 ;
    float presion_manometrica = 0.0 ;
    float presion_absoluta = 0.0 ;

    printf("Ingrese la profundidad: ") ;
    scanf("%f", &profundidad) ;

    presion_manometrica = DENSIDAD * GRAVEDAD * profundidad ;
    presion_absoluta = PRESIÓN + presion_manometrica ;

    printf("La presion manometrica = %.2f Pa\n", presion_manometrica) ;
    printf("La presion absoluta = %.2f Pa\n", presion_absoluta) ;

    return 0 ;

}