#include <stdio.h>

int dato[4];
int num;
int stop = 1;
int main()
{
    for(int i=0;i<4;i++)
    {
        printf("Imprima los valores en los 4 espacios de los vectores: ");
        scanf("%d",&dato[i]);
    }
    while(stop==1){
    printf("\n ¿A que dato queres acceder?(que sean valores del 0 al 3)");
    scanf("%d", &num);
    printf("%d", dato[num]);
    printf("\n ¿Deseas continuar pidiendo datos?(1 si, 0 no)");
    scanf("%d", &stop);
    }
    return 0;
}
