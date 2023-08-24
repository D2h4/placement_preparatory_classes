#include<stdio.h>
#include<conio.h>
void main()
{  int n,ch=65,l=1;
   printf("enter the value of n: ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
           if(i%2==0)
           {
               printf("%c ",ch++);
           }
           else
           {
              printf("%d ",l++);
           }
       }
       printf("\n");
   }
  getch();
}

