#include <stdio.h>

void main() {
    float IVA= 0.15;
    int num_prod = 0;
    float precio = 0.0;
    float subtotal = 0.0;
    float total= 0.0;

    printf ("Por favor ingrese la cantidad de productos: ");
    scanf("%d", &num_prod);

    printf ("Por favor ingrese el precio: ");
    scanf("%f", &precio);

    subtotal = num_prod * precio;
    total = subtotal + (subtotal * IVA);

    printf("El valor es %f \n", total);
    printf ("perro ");
   

}