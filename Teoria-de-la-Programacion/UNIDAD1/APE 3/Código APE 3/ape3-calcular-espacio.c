#include <stdio.h>

int main() {
    int GB = 1024;
    float espacio_documentos = 0.0;
    int cantidad_documentos = 0;
    float tamano_documentos = 0.0;
    float espacio_imagenes = 0.0;
    int cantidad_imagenes = 0;
    float tamano_imagenes = 0.0;
    float espacio_videos = 0.0;
    int cantidad_videos = 0; 
    float tamano_videos = 0.0; 
    int cantidad_programas = 0;
    float tamano_programas = 0.0;
    float espacio_programas = 0.0;
    float espacio_total = 0.0;
    float espacio_GB = 0.0;
    float capacidad_disco = 0.0;
    float porcentaje = 0.0;

    printf ("Ingrese la cantidad de documentos: ");
    scanf("%d", &cantidad_documentos);
    printf ("Ingrese tamaño promedio de documentos: ");
    scanf("%f", &tamano_documentos);

    printf ("Ingrese la cantidad de imágenes: ");
    scanf("%d", &cantidad_imagenes);
    printf ("Ingrese tamaño promedio de imágenes: ");
    scanf("%f", &tamano_imagenes);

    printf ("Ingrese la cantidad de vídeos: ");
    scanf("%d", &cantidad_videos);
    printf ("Ingrese tamaño promedio de vídeos: ");
    scanf("%f", &tamano_videos);

    printf ("Ingrese la cantidad de programas: ");
    scanf("%d", &cantidad_programas);
    printf ("Ingrese tamaño promedio de programas: ");
    scanf("%f", &tamano_programas);

    printf ("Ingrese la capacidad de su disco: ");
    scanf("%f", &capacidad_disco);

    espacio_documentos = cantidad_documentos * tamano_documentos;
    espacio_imagenes = cantidad_imagenes * tamano_imagenes;
    espacio_videos = cantidad_videos * tamano_videos;
    espacio_programas = cantidad_programas * tamano_programas;
    espacio_total = espacio_documentos + espacio_imagenes + espacio_videos + espacio_programas;
    espacio_GB = espacio_total / GB;
    porcentaje = (espacio_GB / capacidad_disco) * 100;

    printf("El espacio ocupado por documentos es:  %.2f MB\n", espacio_documentos);
    printf("El espacio ocupado por imágenes es:  %.2f MB\n", espacio_imagenes);
    printf("El espacio ocupado por videos es:  %.2f MB\n", espacio_videos);
    printf("El espacio ocupado por programas es:  %.2f MB\n", espacio_programas);
    printf("El espacio total utilizado es:  %.2f MB\n", espacio_total);
    printf("El espacio total utilizado en GB es:  %.2f GB\n", espacio_GB);
    printf("El porcentaje de almacenamiento utilizado es:  %.2f %%\n", porcentaje);

    return 0;

}


