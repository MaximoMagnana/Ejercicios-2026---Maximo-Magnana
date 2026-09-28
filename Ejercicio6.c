#include <stdio.h>

typedef struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {

    struct Alumno alumno;

    printf("Ingrese el nombre: ");
    scanf("%s", alumno.nombre);

    printf("Ingrese la edad: ");
    scanf("%d", &alumno.edad);

    printf("Ingrese el año (en número): ");
    scanf("%d", &alumno.año);

    printf("\nDatos del alumno:\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año: %d\n", alumno.año);

    printf("\nIngrese los nuevos datos:\n");

    printf("Nuevo nombre: ");
    scanf("%s", alumno.nombre);

    printf("Nueva edad: ");
    scanf("%d", &alumno.edad);

    printf("Nuevo año: ");
    scanf("%d", &alumno.año);

    printf("\nDatos modificados:\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año: %d\n", alumno.año);

    return 0;
}
