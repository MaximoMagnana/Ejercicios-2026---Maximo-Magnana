#include <stdio.h>

int dato[4];
int dato1[4];
int comparador;
int comparador1;

void comparar(int comparador, int comparador1);

int main()
{
    for(int i = 0; i < 4; i++)
    {
        printf("Imprima los valores en los 4 espacios del vector 1: ");
        scanf("%d", &dato[i]);

        printf("Imprima los valores en los 4 espacios del vector 2: ");
        scanf("%d", &dato1[i]);
    }

    printf("\n¿Que dato del vector 1 queres comparar? (0 al 3): ");
    scanf("%d", &comparador);

    printf("\n¿Que dato del vector 2 queres comparar? (0 al 3): ");
    scanf("%d", &comparador1);

    comparar(comparador, comparador1);

    return 0;
}

void comparar(int comparador, int comparador1)
{
    if(dato[comparador] > dato1[comparador1])
    {
        printf("\nEl dato del vector 1 es mayor al dato del vector 2");
        printf("\nDato 1: %d", dato[comparador]);
        printf("\nDato 2: %d", dato1[comparador1]);
    }
    else
    {
        printf("\nEl dato del vector 2 es mayor al dato del vector 1");
        printf("\nDato 1: %d", dato[comparador]);
        printf("\nDato 2: %d", dato1[comparador1]);
    }
}
