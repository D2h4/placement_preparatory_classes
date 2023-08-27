//not completed yet............
#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100],substr[100];
    int st,ed,j=0;
    printf("enter the string: ");
    gets(str);
    printf("Enter the value of starting and ending index of substring: ");
    scanf("%d%d",&st,&ed);
    for(int i=0;str[i]!='\0';i++)
    {
        if(i==st-1 && i<=ed-1)
        {
            substr[j]=str[i];
            j++;
            st++;
        }
    }
    substr[j]='\0';
    printf("%s",substr);
    getch();
}
