//Armstrong number for N-digit numbers.
#include<stdio.h>
#include<math.h>
int count_no_of_digits(int num,int digits)
{
    while(num>0)
    {
        num=num/10;
        digits++;
    }
    return digits;
}
int isArmstrong(int number)
{
    int current_digit,sum=0,n=number,no_of_digits=0;
    no_of_digits=count_no_of_digits(n,no_of_digits);
    while(n>0)
    {
      current_digit=n%10;
      sum=sum+pow(current_digit,no_of_digits);
      n=n/10;
    }
    if(sum==number){

         return 1;
    }
    else
      {
          return 0;
      }
}
int main()
{
    int number,isArmstrongNumber;
    printf("enter the number: ");
    scanf("%d",&number);
    isArmstrongNumber=isArmstrong(number);
    if(isArmstrongNumber==1)
    {
        printf("%d is a Armstrong number",number);
    }
    else
    {
        printf("%d is not a Armstrong number",number);
    }
    return 0;
}
