#include <stdio.h>
#include <string.h>
int main()
{
    int efe[2][3][2];
    int i,j,k;

    printf("12 adet sayi gir\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3;j++)
        {
            for(k=0; k<2;k++)
            {
                scanf("%d",&efe[i][j][k]);
            }
        }
      }
    printf("girdiginiz degerler");
    for(i=0;i<2;i++)
       for(j=0; j<3;j++)
        {
            for(k=0; k<2; k++)
            {
                printf("efe[%d][%d][%d]=%d\n",i,j,k,efe[i][j][k]);
            }
        }
        return 0;
    }
