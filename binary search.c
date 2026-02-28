#include<stdio.h>
int main()
{
    int i,m,target,mat[100],found=0;
    int low,high,mid;
    printf("enter the limit of the array");
    scanf("%d",&m);
    printf("enter the elements of the array ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&mat[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d\t",mat[i]);
    }
    printf("\n");
    printf("enter the element you want to find");
    scanf("%d",&target);
    low=0;
    high=m-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mat[mid]==target)
        {
            printf("the element is found at [%d]",mid);
            found=1;
            break;
        }
        else if(mat[mid]>target)
        high=mid-1;
        else
        low=mid+1;
    }
    if(!found)
    printf("the element is not found");
}
