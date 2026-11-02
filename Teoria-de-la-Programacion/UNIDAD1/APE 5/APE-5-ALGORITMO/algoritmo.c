#include <stdio.h>

int main () {

    float valor_NL = 0.3 ;
    float valor_NC = 0.7 ;
    int NOTA_MIN = 60 ;
    float C1 = 0.0 ;
    float C2 = 0.0 ;
    float NC = 0.0 ;
    float C3F = 0.0 ;
    float NF = 0.0 ;
    float NL = 0.0 ;
    float NFL = 0.0 ;

    printf("Ingrese la nota del primer certamen: ") ;
    scanf("%f", &C1 );
    

    printf("Ingrese la nota del segundo certamen: ") ;
    scanf("%f", &C2 );
    

    printf("Ingrese la nota de Laboratorio: ") ;
    scanf("%f", &NL );
    
    NFL = (NL * valor_NL) ;
    C3F = ((3*(NOTA_MIN - NFL)/ valor_NC) - C1 - C2) ;

    printf("La nota mínima que usted debe obtener en su certamen para abrobar es: %.2f \n", C3F) ;
    printf("Si el resultado es negativo, sinifica que ya apruebas con las notas actuales sin sumar el certamen 3 \n") ;

    return 0 ;


}