#include <stdio.h>

int main () {

    int y = 4 ;
    int L = 0;
    int poleas = 0 ;
    int cantidad_poleas = 0 ;
    float extremo_movido = 0.0 ;
    float fijo = 0.0 ;

    printf("Ingrese la longitud de la cuerda: ") ;
    scanf("%d",&L) ;
    printf("Ingrese la cantidad de poleas: ") ;
    scanf("%d",&poleas) ;

    cantidad_poleas = poleas * 0.5 ;


    extremo_movido = L * cantidad_poleas ;
    fijo = 2 * extremo_movido ;

    printf("Extremo movido = %f",extremo_movido) ;
    printf("Exremo fijo = %f ",&fijo) ;

    return 0 ;
}

/*Una cuerda de longitud de 10 m tiene un extremo sujeto una carga y el otro extremo pasa por una polea movil y termina en un punto fijo
cuanta longitud de cuerda extra en cada extremo, fijo y movil pi carga y = 4m, distancia entre fijo y carga = 4m*/