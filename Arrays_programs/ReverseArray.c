#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",temp[i]);
    }
    getch();
}
