#include<stdio.h>
int sum(int n)
{
    int add=0;
    while(n!=0)
    {
        add+=n%10;
        n/=10;
    }
    return add;
}    
int reverse(int n)
{
    int rev=0;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    printf("the reverse of a number is %d",rev);
}
int main()
{
    int number;
    printf("enter a three digit number");
    scanf("%d",&number);
    reverse(number);
    printf("\n");
    int result=sum(number);
    printf("the sum of the %d is %d",number,result);
    return 0;
}
