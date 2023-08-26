#include<stdio.h>
#include<conio.h>
void main()
{  int n,r,sum1=0,sum2=0;
   printf("enter the number: ");
   scanf("%d",&n);

   for(int i=n;i>0;i--)
   {
       r=n%10;
       if(i%2==0)
        sum1=sum1+r;
       else
        sum2+=r;

      n=n/10;
   }
   printf("sum1: %d \t sum2: %d",sum1,sum2);
   getch();
}
