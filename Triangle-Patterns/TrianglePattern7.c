#include<stdio.h>
#include<conio.h>
void main()
{  int n;
   printf("enter the value of n: ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
       for(int k=n;k>=i;k--)
       {
           printf("*");

       }
       printf("\n");
   }
  getch();
}
