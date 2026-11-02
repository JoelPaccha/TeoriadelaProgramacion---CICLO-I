/*254. En un taller mecanico, diseñe un algoritmo que calcule el costo de una mudanza. Lea la distancia (real, km), el peso total (real, kg), 
}el volumen (real, m3), el numero de habitaciones (entero) y el servicio adicional (booleano). Use constantes simbolicas TARIFA_BASE = 100.0, 
COSTO_KM = 1.0, COSTO_KG = 0.5, COSTO_M3 = 30.0, COSTO_HABITACION = 25.0, COSTO_EMPAQUE = 200.0. Calcule el costo con expresiones aritmeticas.
 Muestre por pantalla el desglose. Ademas del calculo principal, calcule el resto de una division adicional. Asegurese de inicializar todas 
 las variables antes de usarlas.*/

#include <stdio.h>
#include <stdbool.h>

int main () {
    float TARIFA_BASE = 100 ;
    float COSTO_KM = 1.0 ;
    float COSTO_KG = 0.5 ;
    float COSTO_M3 = 30.0 ;
    float COSTO_HABITACION = 25.0 ;
    float COSTO_EMPAQUE = 200.0 ;
    float distanciakm = 0.0 ;
    float peso_totalkg = 0.0 ;
    float volumen_m3 = 0.0 ;
    int numerohabitaciones = 0 ;
    char respuesta = ' ' ;
    bool servicio_adicional = false ;
    float costo_total = 0.0 ;
    float costo_final = 0.0 ;
    int resto = 0 ;

    printf("Ingrese la distancia (Km):") ;
    scanf("%f", &distanciakm) ;

    printf("Ingrese el peso total (Kg):") ;
    scanf("%f", &peso_totalkg) ;

    printf("Ingrese el volumen (m³):") ;
    scanf("%f", &volumen_m3) ;

    printf("Ingrese el numero de habitaciones:") ;
    scanf("%d", &numerohabitaciones) ;

    costo_total = TARIFA_BASE +  (distanciakm * COSTO_KM) + (peso_totalkg * COSTO_KG ) + (volumen_m3 * COSTO_M3) + (numerohabitaciones * COSTO_HABITACION) ;

    printf("El costo total es: %.2f \n", costo_total) ;
    printf("Desea servicio adicional, S/N \n") ;
    scanf(" %c", &respuesta) ;
    servicio_adicional = (respuesta == 'S' || respuesta == 's') ;
    if (servicio_adicional)
    {
        costo_final = costo_total + COSTO_EMPAQUE ;
        printf("El costo por empaque es: %.2f \n", COSTO_EMPAQUE) ;
        printf("El costo final es: %.2f \n", costo_final) ;
    }
    resto =  ((numerohabitaciones)%2) ;
    printf("La tarifa base es: %.2f \n", TARIFA_BASE) ;
    printf("El costo por Km es: %.2f \n", COSTO_KM) ;
    printf("El costo por Kg es: %.2f \n", COSTO_KG) ;
    printf("El costo por m³ es: %.2f \n", COSTO_M3) ;
    printf("El costo por habitación es: %.2f \n", COSTO_HABITACION) ;
    printf("El resto de una división adicional es: %d \n", resto) ; 

    return 0 ;

}