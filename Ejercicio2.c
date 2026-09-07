#include <stdio.h>

int suma [4];
int sumatoria = 0;

int main()
{
    for(int i=0; i<4; i++)
    {
        printf("Inserte los valores en los 4 espacios de los vectores: ");
        scanf("%d",&suma[i]);
    }
    for(int x=0; x<4; x++)
    {
        sumatoria = sumatoria + suma[x];
        printf("\n%d", sumatoria);
    }
    printf("\n La sumatoria de los valores de tus vectores son: %d", sumatoria);
    sumatoria = sumatoria/4;
    printf("\n El promedio de la sumatoria de los valores de tus vectores son: %d", sumatoria);
    return 0;
}
