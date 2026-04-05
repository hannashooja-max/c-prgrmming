#include<stdio.h>
int fibonacci(int n)
{
    if (n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int m,i;
    printf("Enter the number of terms ");
    scanf("%d",&m);
    printf("Fibonacci series:\n");
    for(i=0;i<m;i++)
    {
        printf("%d\n",fibonacci(i));
    }
    return 0;
}
