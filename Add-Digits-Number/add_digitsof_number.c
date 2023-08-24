
#include<stdio.h>
#include<conio.h>
void main()
{  void addDigits(int);
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    addDigits(num);
}
void addDigits(int n)
{   int r,sum=0;
    while(n>0)
    {
       r=n%10;
       sum=sum+r;
       n=n/10;
    }
    printf("%d",sum);
}
