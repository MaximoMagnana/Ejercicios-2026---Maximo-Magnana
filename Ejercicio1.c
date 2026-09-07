#include <stdio.h>

int dato[3];
int main()
{
    for(int i=0;i<4;i++)
    {
        printf("Imprima los valores en los 4 espacios de los vectores: ");
        scanf("%d",&dato[i]);
    }
    for(int x=0;x<4;x++)
    {
        printf("\n Los datos de tu vector son:%d", dato[x]);
    }
    return 0;
}
