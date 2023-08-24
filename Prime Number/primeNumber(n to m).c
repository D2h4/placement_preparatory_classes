#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m;
    printf("enter the value of n and m: ");
    scanf("%d%d",&n,&m);
     printf("prime number: ");
    for(int i=n;i<=m;i++)
    {
        if(checkPrime(i)==1)
           printf("%d\t",i);
    }
    getch();
}
int checkPrime(int n)
{
    if(n<2)
      return 1;

      for(int i=2;i<n/2;i++)
      {
          if(n%i==0)
            return 0;
      }
    return 1;
}
