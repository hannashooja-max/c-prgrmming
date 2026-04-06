#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,p,q,m,n;
    printf("enter the limits of matrix1:");
    scanf("%d %d",&m,&n);
    printf("enter the limits of matrix2:");
    scanf("%d %d",&p,&q);
    if(m==p&&n==q)
    {
        printf("enter the elements of the first matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("matrix1-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("enter the elements of the second matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("matrix2-\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("sum of the two matrix is:\n");
        for(i=0;i<m,i<p;i++)
        {
            for(j=0;j<n,j<q;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}sumofmatrix
