#include <stdio.h>
void upperdiagonals(int m, int n, int a[100][100]) 
{
    int i, j;
    printf("\nUpper Triangular Matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
        {
            if(i <= j)
                printf("%d\t", a[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
void lowerdiagonals(int m,int n, int a[100][100])
{
    int i, j;
    printf("\nUpper Triangular Matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
        {
            if(i >= j)
                printf("%d\t", a[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100], i, j, m, n;
    printf("Enter limits of matrix (rows and columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]); 
        }
    }
    upperdiagonals(m, n, a);
    lowerdiagonals(m, n, a);
    int sum1=0,sum2=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            sum1=sum1+a[i][j];
            if(i>=j)
            sum2=sum2+a[i][j];
        }
    }
    printf("sum of upper triangular elements =%d\nSum of lower triangular elements=%d\n",sum1,sum2);
    return 0;
}
