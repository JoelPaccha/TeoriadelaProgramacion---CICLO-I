/*255.  Cree un algoritmo que simule el cálculo del salario neto de un trabajador. Lea el salario bruto (real), el número de cargas familiares (entero) 
y los años de antigüedad (entero). Use constantes simbólicas: BONO_CARGA = 50.0, BONO_ANTIGUEDAD = 30.0, DESCUENTO_ISSS = 0.03, DESCUENTO_AFP = 0.0725, }
LIMITE_ANTIGUEDAD = 10. Calcule: bonos = cargas * BONO_CARGA + min(antiguedad, LIMITE_ANTIGUEDAD) * BONO_ANTIGUEDAD; 
descuentos = salario_bruto * (DESCUENTO_ISSS + DESCUENTO_AFP); salario_neto = salario_bruto + bonos - descuentos. 
Evalúe la expresión lógica (salario_neto > salario_bruto). Muestre por pantalla el desglose completo.*/

#include <stdio.h>

int main () {
    float BONO_CARGA = 50.0 ;
    float BONO_ANTIGUEDAD = 30.0 ;
    float DESCUENTO_ISSS = 0.03 ;
    float DESCUENTO_AFP = 0.0725 ;
    float LIMITE_ANTIGUEDAD = 10 ;
    float salario_bruto = 0.0 ;
    int cargas = 0 ;
    int antiguedad = 0 ;
    int antiguedad_valida = 0 ;
    float bonos = 0.0 ;
    float descuentos = 0.0 ;
    float salario_neto = 0.0 ;

    printf("Ingrese el salario bruto: ") ;
    scanf("%f", &salario_bruto) ;

    printf("Ingrese el número de cargas familiares: ") ;
    scanf("%d", &cargas) ;

    printf("Ingrese los años de antiguedad: ") ;
    scanf("%d", &antiguedad) ;

    if (antiguedad < LIMITE_ANTIGUEDAD)
    {
        antiguedad_valida = antiguedad ;
    }
    else {
        antiguedad_valida = LIMITE_ANTIGUEDAD ;
    }
    bonos = (cargas * BONO_CARGA) + (antiguedad_valida * BONO_ANTIGUEDAD) ;
    descuentos = salario_bruto * (DESCUENTO_ISSS + DESCUENTO_AFP) ;
    salario_neto = salario_bruto + bonos - descuentos ;
    printf("Salario bruto: %.2f $\n", salario_bruto) ;
    printf("Bonos: %.2f $\n", bonos) ;
    printf("Descuentos: %.2f $\n", descuentos) ;
    printf("Salario neto: %.2f $\n", salario_neto) ;
    
    if (salario_neto > salario_bruto)
    {
        printf("Los bonos superan a los descuentos, el salario neto es mayor al salario bruto \n") ;
    }
    else
    {
        printf("Los descuentos superan a los bonos, el salario neto es menor o igual al salario bruto \n") ;
    }

    return 0 ; 
        
}