/*To print input three digit no and display sum of digit*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum,a,b,c,n;
    printf("Enter three digit no: ");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b%10;
    n=b/10;
    sum=a+n+c;
    printf("sum of digit=%d",sum);
    return 0;
}