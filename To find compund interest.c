/*To find compund interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float ci,prncpl,rate,time;
    printf("Enter principal amount: ");
    scanf("%f",&prncpl);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);
    ci=prncpl*(pow((1+rate/100),time));
    printf("Compound interest: %f",ci);
    return 0;
}