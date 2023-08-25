#include<stdio.h>
#include<conio.h>
#include<String.h>
void main()
{
    char str[100],temp;
    int m,right,left;
    printf("enter the string: ");
    gets(str);
    m=strlen(str);
     left=0;
     right=m-1;
     for(int i=left;i<=right;i++)
     {
        temp=str[i];
        str[i]=str[right];
        str[right]=temp;
        right--;
     }
     puts(str);
    getch();
}


