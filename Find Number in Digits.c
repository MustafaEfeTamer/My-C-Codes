#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Find Number in Digits

    int sayi,birler_bas,onlar_bas,yuzler_bas,binler_bas;
    printf("Please Enter 4 Digit Number\n");
    scanf("%d",&sayi);
    birler_bas=sayi%10;
    onlar_bas=sayi%100/10;
    yuzler_bas=sayi%1000/100;
    binler_bas=sayi%10000/1000;

    printf("Units Digit:%d\n",birler_bas);
    printf("Tens Digit:%d\n",onlar_bas);
    printf("Hundreds Digit:%d\n",yuzler_bas);
    printf("Thousands Digit:%d",binler_bas);




    return 0;
}
