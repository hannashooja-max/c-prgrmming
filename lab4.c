#include <stdio.h>
#include <limits.h>

#define MAX 10

void findSaddlePoints(int mat[MAX][MAX], int m, int n);
void findSecondLargest(int mat[MAX][MAX], int m, int n);

int main() 
{
    int m, n, i, j;
    int mat[MAX][MAX];

    printf("Enter number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    findSaddlePoints(mat, m, n);
    findSecondLargest(mat, m, n);

    return 0;
}

void findSaddlePoints(int mat[MAX][MAX], int m, int n) 
{
    int i, j, k, found = 0;

    for (i = 0; i < m; i++) 
    {
        // Step 1: Find the minimum element in current row
        int min = mat[i][0];
        int col_index=0;
        for (j = 1; j < n; j++)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
                col_index = j;
            }
        }
 // Step 2: Check if row_min is the largest in its column
        int is_saddle = 1;
        for (k = 0; k < m; k++)
        {
            if (mat[k][col_index] > min) 
            {
                is_saddle = 0;
                break;
            }
        }

        if (is_saddle) 
        {
            printf("\nSaddle Point found: %d at (Row %d, Column %d)", min, i + 1, col_index + 1);
            found = 1;
        }
    }
    if (!found) printf("\nNo Saddle Point exists.");
}

void findSecondLargest(int mat[MAX][MAX], int m, int n) {
    int i, j;
    int largest = mat[0][0];
    int secondLargest = mat[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
         {
            if (mat[i][j] > largest) 
            {
                secondLargest = largest;
                largest = mat[i][j];
            } 
            else if ( mat[i][j] != largest && (secondLargest == largest || mat[i][j] > secondLargest)) 
            {
                secondLargest = mat[i][j];
            }
        }
    }
    printf("\nSecond largest element in the matrix: %d\n", secondLargest);
}
