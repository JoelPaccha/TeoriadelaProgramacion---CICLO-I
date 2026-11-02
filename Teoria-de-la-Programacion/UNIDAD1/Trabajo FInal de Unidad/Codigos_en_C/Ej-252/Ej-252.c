/*252 Diseñe un algoritmo que valide una dirección de correo electrónico ingresada por teclado (cadena). Use constantes simbólicas MIN_LEN = 5, MAX_LEN = 50.
Evalúe la expresión lógica compuesta: (longitud(correo) >= MIN_LEN AND longitud(correo) <= MAX_LEN AND contiene(carreo, '@') AND contiene(carreo, '.') AND NOT empieza_con(carreo, '@') 
AND NOT termina_con(carreo, '@')). Asigne el resultado a una variable booleana correo_valido. Muestre por pantalla si el correo es válido o no, indicando qué criterios fallaron. 
Identifique dato vs información.*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main () {

    bool correo_valido = false ;
    int MIN_LEN = 5 ;
    int MAX_LEN = 50 ;
    char correo [50] ;

    printf("Ingrese una dirección válida de correo: ") ;
    scanf("%49s", correo) ;

    correo_valido = (strlen(correo) >= MIN_LEN && strlen(correo) <= MAX_LEN && strchr(correo, '@') && strchr (correo, '.')
    &&! correo [0] != '@' &&! correo[strlen(correo) -1] != '@') ;

    if (correo_valido)
    {
        printf("Correo válido \n") ;
    }
    else 
    {
        printf("Correo no válido \n") ; 
    }
    if (strlen(correo) < MIN_LEN)
    {
        printf("Caracteres insuficientes \n") ;
    }
    if (strlen(correo) > MAX_LEN)
    {
        printf("Demasiados caracteres \n") ;
    }
    if (!strchr(correo, '@'))
    {
        printf("No contiene @ \n") ;
    }
    if (!strchr(correo, '.'))
    {
        printf("No contiene punto (.) \n") ;
    }
    if (correo [0] == '@')
    {
        printf("No puede empezar con '@' \n") ;
    }
    if (correo[strlen(correo) -1] == '@')
    {
        printf("No puede terminar con '@' \n") ;
    }
    
    return 0 ;

}