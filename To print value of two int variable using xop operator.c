/*To print value of two int variable using xop operator*/
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int a,b;
    printf("Enter number A: " );
    scanf("%d",&a);
    printf("Enter number B: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("A is=%d\nB is=%d",a,b);
    return 0;
}
    