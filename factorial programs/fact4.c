//with recursive fn
#include<stdio.h>
#include<conio.h>
void main()
{   int fact(int);
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    getch();
}
int fact(int n)
{
  if(n==0 || n==1)
        return 1;
  else
    return n*fact(n-1);
}
