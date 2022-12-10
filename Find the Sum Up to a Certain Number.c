#include <stdio.h>
#include <stdlib.h>

int main()
{


    //Find the Sum Up to a Certain Number

    int x,conclusion=0,i=1;
    printf("Please Enter a number\n");
    scanf("%d",&x);

    while(i<=x)
    {
        conclusion=conclusion+i;
        i++;
    }

    printf("Total:%d",conclusion);



    return 0;
}
