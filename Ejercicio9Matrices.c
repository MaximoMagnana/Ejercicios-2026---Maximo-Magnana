#include <stdio.h>

int main()
{
    int matriz[4][3][3];
    int i,j,k;
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
                for(k=0;k<3;k++)
                {
                    printf("\nIngrese el valor de la posición [%d][%d][%d]: ",i,j,k);
                    scanf("%d",&matriz[i][j][k]);
                }
        }
    }


    return 0;
}
