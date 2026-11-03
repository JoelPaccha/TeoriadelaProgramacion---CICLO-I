/*108. Diseñe un algoritmo que lea una cantidad de segundos (entero) desde teclado. Use las constantes literales 60 y 3600 para representar segundos por minuto y por hora
. Calcule las horas, minutos y segundos equivalentes usando expresiones aritméticas con operadores división entera y módulo. Muestre por pantalla el resultado con el formato: 
"X segundos equivalen a H horas, M minutos y S segundos".
Inicio
segundos_minuto = 60 ;
segundos_hora = 3600 ; 
segundos = 0 ;
H = 0 ;
M = 0 ;
S = 0 ;
Leer segundos ;
H = segundos / segundos_hora ;
M = (segundos MOD segundos_hora) / segundos_minuto ; 
S = segundos MOD segundos_minutos ;
Escribir segundos + “ segundos ” + “equivalen a: ” + H + “ Horas, ” + M + “ Minutos , y ” + S  + “ Segundos” ;
Fin*/

#include <stdio.h>

int main() {
    int segundos_minuto = 60 ;
    int segundos_hora = 3600 ;
    int segundos = 0;
    int H = 0 ;
    int M = 0 ;
    int S = 0 ;

    printf ("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);
   
    H = segundos / segundos_hora ;
    M = (segundos % segundos_hora) / segundos_minuto ;
    S = segundos % segundos_minuto ;

    printf("%d segundos equivalen a %d horas, %d minutos y %d segundos\n", segundos, H, M, S) ;

    return 0 ;

}