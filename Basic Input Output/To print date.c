#include <stdio.h>
#include <conio.h>
int main()
{
    int date, month, year;
    printf("\nEnter Date in - DD/MM/YYYY = ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("Day - %d,Month - %d,Year - %d\n", date, month, year);
    getch();
    return 0;
}