#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Multiples of 17 at While Loop Up to Limit Value

    int i=0,sutun=0;
    int limit;
    printf("Please Enter a Limit Number\n");
    scanf("%d",&limit);
     while(i<=limit)
     {
         if (i%17==0)
         {
             printf("%5d",i);
             sutun++;
             if(sutun%10==0)
             {
               printf("\n");
             }
         }
         i++;

     }


    return 0;
}
