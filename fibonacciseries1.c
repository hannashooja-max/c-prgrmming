#include<stdio.h>
int main()
{
    int a=0,b=1,f=0,m;
    printf("final number on the series");
    scanf("%d",&m);
    int i=0;
    while(i<=m)
    {
        printf("%d\n",a);
        f=a+b;
        a=b;
        b=f;
        i++;
    }
    return 0;
}
