#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, r1, x2, y2, r2;
    float d, suma, resta;

    printf("Circunferencia 1 - centro x1: ");
    scanf("%f", &x1);
    printf("Circunferencia 1 - centro y1: ");
    scanf("%f", &y1);
    printf("Circunferencia 1 - radio r1: ");
    scanf("%f", &r1);

    printf("Circunferencia 2 - centro x2: ");
    scanf("%f", &x2);
    printf("Circunferencia 2 - centro y2: ");
    scanf("%f", &y2);
    printf("Circunferencia 2 - radio r2: ");
    scanf("%f", &r2);

    if (r1 <= 0 || r2 <= 0) {
        printf("Los radios deben ser mayores a 0\n");
        return 1;
    }

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    suma = r1 + r2;
    resta = fabs(r1 - r2);

    printf("Distancia entre centros: %.2f\n", d);

    if (d == 0 && r1 == r2) {
        printf("Las circunferencias son coincidentes\n");
    }
    else if (d == suma) {
        printf("Las circunferencias son tangentes exteriores\n");
    }
    else if (d > suma) {
        printf("Las circunferencias son exteriores\n");
    }
    else if (d == resta) {
        printf("Las circunferencias son tangentes interiores\n");
    }
    else if (d < resta) {
        printf("Las circunferencias son interiores sin interseccion\n");
    }
    else {
        printf("Las circunferencias son secantes\n");
    }

    return 0;
}

























/*raiz cuadrada de [(x2-x1)al cuadrado + (y2-y1)al cuadrado], sqrt numero, pow base y exponente*/ #include <math.h>
/*Se reciben dos circuferencias, circuferencia 1: centro (x1, y1), radior1, circuferencia 2: centro (x2, y2), radio2
La distania entre centos es d = raiz cuadrada de [(x2-x1)al cuadrado + (y2-y1)al cuadrado */
/*El algoritmo debe determinar si las circuferencias son exteriores, tangentes exteriores, secantes, tangentes interiores, interiores sin interseccion o coincidentes*/

