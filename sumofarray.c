#include<stdio.h>

int sum_of_array(int a[100],int m)
{
    int j,sum=0;
    for(j=0;j<m;j++)
    {
        sum+=a[j];
    }
    return sum;
}
int main()
{
    int i,m,ar[100];
    printf("enter the limit of the array : ");
    scanf("%d",&m);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }
    int result=sum_of_array(ar,m);
    printf("the sum of array is %d",result);
    return 0;
}
