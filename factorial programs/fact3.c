//with fn(with arguments with return type)
#include<stdio.h>
#include<conio.h>
void main()
{   int fact(int);
    int n;
   printf("enter the value of n:");
   scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
    getch();
}
int fact(int n)
{
   int i,fac=1;
   for(i=1;i<=n;i++)
   {
      fac=fac*i;
   }
   return fac;
}