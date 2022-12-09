#include <stdio.h>
#include <stdlib.h>

int main()
{

   //FINDING MAX and MIN NUMBER

    int a,b,c,max,min;
    printf("Please Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Max Number is:%d\n",max);

    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    printf("Min Number is:%d",min);



    return 0;
}
