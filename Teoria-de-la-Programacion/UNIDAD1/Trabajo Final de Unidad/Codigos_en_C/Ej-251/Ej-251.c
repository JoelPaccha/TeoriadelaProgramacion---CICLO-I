#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

    int LIMITE_PM25 = 25 ;
    int LIMITE_PM10 = 50 ;
    int LIMITE_O3 = 100 ;
    int LIMITE_NO2 = 200 ;
    int LIMITE_SO2 = 125 ;

    float PM25 = 0.0 , PM10 = 0.0 , O3 = 0.0 , NO2 = 0.0 , SO2 = 0.0 ;
    float indicePM25 = 0.0 , indicePM10 = 0.0 , indiceO3 = 0.0 , indiceNO2 = 0.0 , indiceSO2 = 0.0 , indice = 0.0 , resto = 0.0 ;
    char calidad [10] ;

    printf("Ingrese el valor de PM2.5: ") ;
    scanf("%f", &PM25) ;

    printf("Ingrese el valor de PM10: ") ;
    scanf("%f", &PM10) ;
    
    printf("Ingrese el valor de O3: ") ;
    scanf("%f", &O3) ;
    
    printf("Ingrese el valor de NO2: ") ;
    scanf("%f", &NO2) ;

    printf("Ingrese el valor de SO2: ") ;
    scanf("%f", &SO2) ;

    indicePM25 = PM25/ LIMITE_PM25 ;
    indicePM10 = PM10/ LIMITE_PM10 ;
    indiceO3 = O3/ LIMITE_O3 ;
    indiceNO2 = NO2/ LIMITE_NO2 ;
    indiceSO2 = SO2/ LIMITE_SO2 ;


    if (indicePM25 > indice)
    {
        indice = indicePM25 ;
    }
    if (indicePM10 > indice)
    {
        indice = indicePM10 ;
    }
    if (indiceO3 > indice)
    {
        indice = indiceO3 ;
    }
    if (indiceNO2 > indice)
    {
        indice = indiceNO2 ;
    }
    if (indiceSO2 > indice)
    {
        indice = indiceSO2 ;
    }

    printf("El índice es: %.2f \n", indice) ;

    if (PM25 > LIMITE_PM25 ||  PM10 > LIMITE_PM10 || 03 > LIMITE_O3 || NO2 > LIMITE_NO2 || SO2 > LIMITE_SO2)
    {
        strcpy(calidad, "MALA") ;
    }
    else
    {
        strcpy(calidad, "BUENA") ;
    }
    
    printf("Calidad del aire: %s\n", calidad) ;

    resto = (int) PM25 % 2 ;
    printf("El resto de una división adicional es: %.2f \n", resto) ;

    printf("Resumen de valores ingresados: \n") ;

    printf("PM2.5: %.2f\n", PM25 ) ;
    printf("PM10: %.2f\n", PM10 ) ;
    printf("O3: %.2f\n", O3 ) ;
    printf("NO2: %.2f\n", NO2 ) ;
    printf("SO2: %.2f\n", SO2 ) ;

    return 0 ;


}