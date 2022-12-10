#include <stdio.h>
#include <stdlib.h>

int main()
{
 //Find the Sum Up to a Certain Number


    int a,i=1,conclusion=0;
    printf("Please Enter a Number\n");
    scanf("%d",&a);

    while(i<=a)
    {
        if(i==a)
        {
            printf("%d\n",a);
            break;
        }
        else
        {
            printf("%d + ",i);
        }
        conclusion=conclusion+i;
        i++;
    }

     printf("Conclusion is:%d",conclusion);


    return 0;
}
