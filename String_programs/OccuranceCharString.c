#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int pos,count=0,i,j;
    printf("enter the string: ");
    gets(str);
    printf("enter the pos which char occurance you want to find out: ");
    scanf("%d",&pos);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[pos-1]==str[i])
            count++;
    }
    printf("occurance of %c in given string is:%d",str[pos-1],count);
    getch();
}

