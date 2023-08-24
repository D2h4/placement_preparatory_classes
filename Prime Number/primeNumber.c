#include<stdio.h>
#include<conio.h>
void main()
{   int isPrime(int num);
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(isPrime(n)==1)
        printf("prime number");
    else
        printf("not a prime number");

    getch();
}
int isPrime(int num)
{
     if(num<2)
        return 1;
    for(int i=2;i<=(num/2);i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;

}
