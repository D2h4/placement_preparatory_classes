//with fn(no arguments no return type)
#include<stdio.h>
#include<conio.h>
void main()
{   void fact();
    fact();
    getch();
}
void fact()
{
    int n,i,fact=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}