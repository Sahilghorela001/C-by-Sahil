/* To write the proram to input a number from the user and also
input a digit append a digit in the number and print the result.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a digit: ");
    scanf("%d",&digit);
    a=num*10+digit;
    printf("append a num= %d",a);
    return 0;
}