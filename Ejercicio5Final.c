#include <stdio.h>

#define TAM 10

float calcularPromedio(int vec[], int n, int *suma)
{
    int i;
    *suma = 0;

    for (i = 0; i < n; i++) {
        *suma += vec[i];
    }

    return (float)(*suma) / n;
}

void ordenarMayorAMenor(int vec[], int n)
{
    int i, j, aux;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vec[j] < vec[j + 1]) {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}

int main(void)
{
    int vec[TAM];
    int i, suma;
    float promedio;

    
    for (i = 0; i < TAM; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    
    ordenarMayorAMenor(vec, TAM);

    printf("\nVector ordenado de mayor a menor:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    
    promedio = calcularPromedio(vec, TAM, &suma);

    printf("\nSuma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
