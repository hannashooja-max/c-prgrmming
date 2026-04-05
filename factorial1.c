#include<stdio.h>
int main()
{
    int m,i,fa=1;
    printf("enter the number you want to find the factorial of ");
    scanf("%d",&m);
    i=1;
    while(i<=m)
    {
        fa= fa*i;
        i++;
    }
    printf("%d",fa);
    return 0;
}
