/*438. Construya un algoritmo que lea el sueldo base (real) de un trabajador. Use una constante simbólica BONO = 1.5 (porcentaje de bono) 
y una constante literal 100 para el cálculo. Calcule el bono con la expresión aritmética (sueldo * BONO / 100) y el sueldo total con (sueldo + bono). 
Evalúe la expresión relacional (sueldo_total > sueldo). Muestre por pantalla el desglose completo.*/

#include <stdio.h>

int main () {

    float BONO = 1.5 ;
    int CONSTANTE = 100 ;
    float sueldo_base = 0.0 ;
    float bono_total = 0.0 ;
    float sueldo_total = 0.0 ;

    printf("Ingrese el sueldo base: ") ;
    scanf("%f", &sueldo_base) ;

    bono_total = (sueldo_base * BONO / CONSTANTE) ;
    sueldo_total = sueldo_base + bono_total  ;

    if (sueldo_total > sueldo_base)
    {
        printf("Sueldo base: %.2f $ \n", sueldo_base) ;
        printf("Bono: %.2f $ \n", BONO) ;
        printf("Bono total: %.2f $ \n", bono_total) ;
        printf("Sueldo total: %.2f $ \n", sueldo_total) ;
    }
    else
    {
        printf("Sueldo base no puede ser mayor o igual que sueldo total") ;
    }
    
    return 0 ;

}