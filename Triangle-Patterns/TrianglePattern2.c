#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   printf("enter the value of n: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=n;j>=i;j--)
       {
           printf("%d",j);
       }
       printf("\n");
   }
   getch();
}
