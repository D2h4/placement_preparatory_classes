#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("enter the string1: ");
    gets(str1);
    printf("enter the string2: ");
    gets(str2);
    if(checkAnagram(str1,str2)==1)
        printf("both strings are anagram to each other");
    else
        printf("both strings are not anagram to each other");
    getch();
}
int checkAnagram(char a[],char b[])
{
    if(strlen(a)!=strlen(b))
        return 0;
     int freq_a[26]={0};
     int freq_b[26]={0};
    /* for(int i=0;a[i]&&b[i];i++)
     {
         freq_a[a[i]-97]++;
          freq_b[b[i]-97]++;
     }*/
     for(int i=0;a[i]!='\0';i++)
     {
         freq_a[a[i]-97]++;
     }
     for(int i=0;b[i]!='\0';i++)
     {
         freq_b[b[i]-97]++;
     }
     for(int i=0;i<26;i++)
     {
         if(freq_a[i]!=freq_b[i])
            return 0;
     }
     return 1;
}
