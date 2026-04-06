#include<stdio.h>
int factorial(int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int i,m;
    printf("enter the number you want to find the factorial of ");
    scanf("%d",&m);
    i=0;
    while(i<m)
    {
        factorial(m);
        i++;
    }
    printf("%d",factorial(m));
    return 0;
}
