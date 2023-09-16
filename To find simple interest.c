/*wap to find simple interest*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float prncpl,time,rate,si;
    printf("Enter princpal amount: ");
    scanf("%f",&prncpl);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time period: ");
    scanf("%f",&time);
    si=(prncpl*rate*time)/100;
    printf("%f",si);
    return 0;
}