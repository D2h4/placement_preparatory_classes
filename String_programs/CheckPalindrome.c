#include<stdio.h>
#include<conio.h>
#include<String.h>
void main()
{
    char str[20];
    printf("enter the string: ");
    gets(str);
    int n=strlen(str);
    if(checkPalindrome(str,n)==1)
        printf("palindrome");
    else
        printf("not palindrome");

    getch();
}
int checkPalindrome(char str[],int n)
{    int c,i;
     for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-i-1])
           {
               c++;
           }
    }
   if(c==i)
    return 0;
   else
    return 1;

}
