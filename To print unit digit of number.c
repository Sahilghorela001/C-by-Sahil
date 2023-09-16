/*wap to print unit digit of the given number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n;
    printf("Enter number-> ");
    scanf("%d",&num);
    
    n=num%10;
    printf("Last digit=%d",n);
    return 0;
}