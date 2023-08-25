#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],ch;
    int m;
    printf("enter the string: ");
    gets(str);
    printf("enter the position which you want to capitalize: ");
    scanf("%d",&m);
    /*ch=str[m-1];
    ch=ch-32;
    str[m-1]=ch;*/
    str[m-1]=str[m-1]-32;
     puts(str);
    getch();
}


