#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],sum1,sum2,sum3;
    printf("enter the limit ");
    scanf("%d %d",&m,&n);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(m==n)
    {
        printf("the diagonal elements are\n");
        sum1=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("%d\t",a[i][j]);
                    sum1+=a[i][j];
                }
                if(i!=j)
                    {
                        printf("0\t");
                    }
                
            }
            printf("\n");
        }
        printf("sum of diagonal elements are %d\n",sum1);
        printf("\nthe upper triangular elements are \n");
        sum2=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<=j)
                {
                    printf("%d\t",a[i][j]);
                    sum2+=a[i][j];
                }
            }
            printf("\n");
        }
        printf("the sum of upper triangulr elements are %d\n\nthe lower triangular elements are \n",sum2);
        sum3=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>=j)
                {
                    printf("%d\t",a[i][j]);
                    sum3+=a[i][j];
                }
            }
            printf("\n");
        }
        printf("the sum of lower triangle elements are %d",sum3);
    }
    return 0;
}
