/*If 1 USD in INR is 83.09 ,then convert the input amount in INR to USD */
#include<stdio.h>
#include<conio.h>
int main()
{
    float USD,INR;
    printf("Enter amount in USD: ");
    scanf("%f",&USD);
    INR=USD*83.09;
    printf("Your amount in INR=%f",INR);
    return 0;
}