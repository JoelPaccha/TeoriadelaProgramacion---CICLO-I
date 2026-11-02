/*253. En una farmacia, cree un algoritmo que controle las ventas mensuales. Lea las ventas del mes (real), la meta mensual (real), 
el porcentaje de comision (real), el numero de clientes nuevos (entero) y el numero de devoluciones (entero). Use constantes simbolicas 
BONO_META = 0.05, DESC_DEVOLUCIONES = 0.02, MAX_DEVOLUCIONES = 5. Evalúe la expresion logica (ventas >= meta). Calcule la comision con expresiones 
aritmeticas. Muestre por pantalla el detalle. Ademas del calculo principal, calcule el resto de una division adicional. Identifique explicitamente 
los datos de entrada y la informacion de salida.*/

#include <stdio.h>
#include <math.h>

int main () {

    float BONO_META = 0.05 ;
    float DESC_DEVOLUCIONES = 0.02 ;
    int MAX_DEVOLUCIONES = 5 ;
    float ventas = 0.0 ;
    float meta = 0.0 ;
    float porcentaje = 0.0 ;
    int clientes_nuevos = 0 ;
    int devoluciones = 0 ;
    float bono = 0.0 ;
    float comisiones = 0.0 ;
    float comision_total = 0.0 ;
    float descuento = 0.0 ;
    float descuento_total = 0.0  ;
    int resto = 0 ;

    printf("Ingrese el número de ventas: ") ;
    scanf("%f", &ventas) ;

    printf("Ingrese la meta mensual: ") ;
    scanf("%f", &meta) ;

    printf("Ingrese el porcentaje de comisión: ") ;
    scanf("%f", &porcentaje) ;

    printf("Ingrese el número de clientes nuevos: ") ;
    scanf("%d", &clientes_nuevos) ;

    printf("Ingrese el número de devoluciones: ") ;
    scanf("%d", &devoluciones) ;

    comisiones = (ventas * porcentaje) / 100 ;

    if (ventas >= meta)
    {
        bono = comisiones * BONO_META ;
    }
    comision_total = comisiones + bono ;
    printf("La comision total es: %.2f \n", comision_total) ;

    if (devoluciones >  MAX_DEVOLUCIONES)
    {
        descuento = (comision_total * DESC_DEVOLUCIONES) * devoluciones ;
        descuento_total = comision_total - descuento ;
        printf("El descuento por devoluciones es: %.2f \n", descuento) ;
        printf("La comision menos el descuento es: %.2f \n", descuento_total) ;
    }

    resto = ((clientes_nuevos) % 2) ;
    printf("El resto de una división adicional es: %d \n", resto) ;

    return 0 ;

}
