#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main () {

    bool tipo_circuito = false;
    char respuesta [15] ;
    float R1 = 0.0 ;
    float R2 = 0.0 ;
    float Req = 0.0 ;
    float I = 0.0 ;
    float V = 0.0 ;
    float P = 0.0 ;
    float IMAX = 2.00 ;
    float PMAX = 20.00 ;
    int RMIN = 3 ;

    printf ("Qué tipo de conexión quiere verificar?: ") ;
    scanf(" %14s", respuesta) ;
    tipo_circuito = (strcasecmp(respuesta, "Serie") == 0) ;

    if (tipo_circuito)
    {
        printf("Ingrese resistencia 1: ") ;
        scanf("%f", &R1) ;
        printf("Ingrese resistencia 2: ") ;
        scanf("%f", &R2) ;

        printf("Ingrese voltaje: ") ;
        scanf("%f", &V) ;

        Req = R1 + R2 ;
        I = V / Req ;
        P = V * I ;

        printf("CORRIENTE : %.2f A \n", I) ;
        printf("RESISTENCIA EQUIVALENTE : %.2f Ω \n", Req) ;
        printf("POTENCIA : %.2f W \n", P) ;


        if (I > IMAX)
        {
            printf ("La corriente es segura \n") ;
        }
        else
        {
            printf("La corriente no es segura \n") ;
        }
        if (P > PMAX )
        {
            printf("Potencia segura \n") ;
        }
        else 
        {
            printf("Potencia no segura \n") ;
        }
        if (Req < RMIN)
        {
            printf("La resistencia equivalemnte mínima admisible es 3Ω \n") ;
        }
        
    }
    else
    {
        Req = (R1 * R2) / (R1 + R2) ;
        I = V / Req ;
        P = V * I ;
        printf("CORRIENTE : %.2f A", I) ;
        printf("RESISTENCIA EQUIVALENTE : %.2f Ω", Req) ;
        printf("POTENCIA : %.2f W", P) ;


        if (I > 2.00)
        {
            printf ("La corriente es segura \n") ;
        }
        else
        {
            printf("La corriente no es segura \n") ;
        }
        if (P > 20.00 )
        {
            printf("Potencia segura \n") ;
        }
        else 
        {
            printf("Potencia no segura \n") ;
        }
        if (Req < 3)
        {
            printf("La resistencia equivalemnte mínima admisible es 3Ω \n") ;
        }
    }
    
    return 0 ;

}