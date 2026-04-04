#include<stdio.h>
#define MAX 100
int array(int m)
{
    int a[MAX],i;
    printf("enter elements of the array \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sort(int m)
{
   int i,j,a[MAX],temp;
   for(i=0;i<m;i++)
   {
       for(j=0;j<m-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   for(i=0;i<m;i++)
   {
       printf("%d\t",a[i]);
   }
}
int main()
{
    int m,i,j,a[MAX];
    printf("enter limit of array");
    scanf("%d",&m);
    array(m);
    sort(m);
    return 0;
}
