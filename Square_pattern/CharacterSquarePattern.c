#include<stdio.h>
#include<conio.h>
void main()
{   int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int ch=97;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(ch%2==0)
           {
               ch=ch-32;
               printf("%c",ch);
               ch=ch+32;
           }
           else
           {
               printf("%c",ch);
           }
        }
        ch++;
        printf("\n");
    }
}
