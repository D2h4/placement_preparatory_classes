#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
    int a[max],n,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements in the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int pass=1;pass<10;pass++)
    {
        for(int i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("%d",a[n-2]);
    getch();
}
