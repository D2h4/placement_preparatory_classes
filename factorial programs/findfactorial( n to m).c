
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m;
    printf("enter the value of n and m: ");
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        printf("%d\t",fact(i));
    }
    getch();
}
int fact(int num)
{
    if(num==0 || num==1)
        return 1;
    else
        return num*fact(num-1);
}
