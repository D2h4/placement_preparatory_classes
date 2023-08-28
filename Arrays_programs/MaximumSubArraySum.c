#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=FindMaximumSubArray(arr,n);
    printf("%d",res);

    getch();
}
int FindMaximumSubArray(int a[],int n)
{
    int curr=0;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        curr=curr+a[i];
        if(max<curr)
            max=curr;
        if(curr<0)
            curr=0;
    }
    return max;
}
