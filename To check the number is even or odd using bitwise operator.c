/* To check whether the given number is even or odd using bitwise operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    if(num&1)
    printf("Odd number");
    else
    printf("Even number");
    return 0;
}