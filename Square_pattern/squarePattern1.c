#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ch=65;

    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                 printf("*");
            }
            else
               {
                    printf("%c",ch++);

               }


        }
       printf("\n");
    }
}
