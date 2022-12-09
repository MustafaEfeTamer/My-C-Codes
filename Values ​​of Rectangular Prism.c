#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Values ​​of Rectangular Prism

    int a,b,h;
     printf("Please enter x,y and z values\n");
     scanf("%d%d%d",&a,&b,&h);
     printf("Floor Area is:%d\n",a*b);
     printf("Lateral Area is:%d\n",2*(a*h)+2*(b*h));
     printf("Total Area is:%d\n",2*(a*b)+2*(a*h+b*h));
     printf("Volume of Rectangular Prism is:%d\n",a*b*h);

    return 0;
}
