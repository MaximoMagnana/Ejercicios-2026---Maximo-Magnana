#include <stdio.h>

typedef struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {

    struct Alumno alumnos[3];
    int i;

    for (i = 0; i < 3; i++) {

        printf("\nAlumno %d\n", i + 1);

        printf("Ingrese el nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Ingrese la edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Ingrese el año (en número): ");
        scanf("%d", &alumnos[i].año);
    }

    printf("\nDatos de los alumnos\n");

    for (i = 0; i < 3; i++) {

        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Año: %d\n", alumnos[i].año);
    }

    printf("\nModificar datos\n");

    for (i = 0; i < 3; i++) {

        printf("\nAlumno %d\n", i + 1);

        printf("Nuevo nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Nueva edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Nuevo año: ");
        scanf("%d", &alumnos[i].año);
    }

    printf("\nDatos modificados\n");

    for (i = 0; i < 3; i++) {

        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Año: %d\n", alumnos[i].año);
    }

    return 0;
}
