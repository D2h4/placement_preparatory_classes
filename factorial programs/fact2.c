//with fn(with arguments no return type)
#include<stdio.h>
#include<conio.h>
void main()
{   void fact(int);
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    fact(n);
    getch();
}
void fact(int n)
{
    int facc=1,i;
    for(i=1;i<=n;i++)
    {
        facc=facc*i;
    }
    printf("%d",facc);
}