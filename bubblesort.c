#include <stdio.h>
int main() 
{
    int a[100],i,m,j,temp;
    printf("enter the limit of the array");
    scanf("%d",&m);
    printf("enter the elememts\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
              a[j+1]=temp;
           }  
        }
    }
    printf("sorted array\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
