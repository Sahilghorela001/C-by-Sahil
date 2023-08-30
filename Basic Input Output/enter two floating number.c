#include<stdio.h>
#include<conio.h>
int main()
{
    float n;
    printf("enter the floating point no: ");
    scanf("%f",&n);
    int result=(int)(n*100)%100;
    printf("two decimal after the decimal point:%02d\n",result);
    return 0;
}