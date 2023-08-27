#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,count=0,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int pass=1;pass<n;pass++)
    {
        for(int j=0;j<n-pass;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

     for(int i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
    getch();
}






