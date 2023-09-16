/*To print  values of two int number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("enter number A: ");
    scanf("%d",&a);
    printf("enter number B: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("A is=%d\nB is=%d",a,b);
    return 0;
}