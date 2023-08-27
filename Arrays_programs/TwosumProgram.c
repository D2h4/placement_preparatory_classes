
#include<stdio.h>
#include<conio.h>
void main()
{  int arr[100],n,target,count=0;
   printf("enter the size of array: ");
   scanf("%d",&n);
   printf("enter the elements of array: ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("enter the target which you want to achieve: ");
   scanf("%d",&target);

   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if((arr[i]+arr[j])==target)
           {
               count++;
                printf("(%d,%d)",arr[i],arr[j]);
           }

       }
   }
   printf("no of pairs: %d",count);
   getch();
}

