#include<stdio.h>
int main()
{
    int n, primaryDiagonal = 0, secondaryDiagonal = 0, diff = 0;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int matrix[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i<n; i++)
    {
        primaryDiagonal += matrix[i][i]; 
    }

    for(int i = 0; i<n; i++)
    {
        secondaryDiagonal += matrix[i][n - i -1];
    }
    
    diff = primaryDiagonal - secondaryDiagonal;
    if (diff < 0) 
    {
        printf("%d",diff*(-1));
    }
    else 
    {
        printf("%d",diff);
    }
    return 0;
}