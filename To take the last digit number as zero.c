/*To take the last digit of a number stored in a variable as zero*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last;
    printf("Enter the number: ");
    scanf("%d",&num);
    last=num%10;
    num=num-last;
    printf("number=%d",num);
    return 0;
}