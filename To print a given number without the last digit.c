/* To print a given number without its last digit*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n;
    printf("Enter number: " );
    scanf("%d",&num);
    n=num/10;
    printf("%d",n);
    return 0;
}