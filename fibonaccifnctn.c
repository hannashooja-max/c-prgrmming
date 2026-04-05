#include<stdio.h>
int fibonacci(int m)
{
    int a=0,b=1,f;
   
    int i=0;
    while(i<=m)
    {
        printf("%d\n",a);
        f=a+b;
        a=b;
        b=f;
        i++;
    }
}
int main()
{
    int m;
    printf("final number on the series");
    scanf("%d",&m);
    fibonacci(m);
    return 0;
}
