#include<stdio.h>
#include<conio.h>
void main()
{   void checkLeapYear(int y);
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    checkLeapYear(year);
    getch();
}
void checkLeapYear(int y)
{
    if(y%4==0 || y%400==0 && y%100!=0)
       printf("leap year");
    else
        printf("not a leap year");
}
