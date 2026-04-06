#include<stdio.h>
int main()
{
    int arr1[100]={1,2,3,4};
    int arr2[100]={5,6,7};
    int merge[100];
    int m=4,n=3;
    int i;
    for(i=0;i<m;i++)
    {
      merge[i]=arr1[i];   
    }
    for(i=0;i<n;i++)
    {
        merge[m+i]=arr2[i];
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d\t",merge[i]);
    }
    return 0;
}
