#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int n;
    printf("Enter dimension of the sqare matrix\n");
    scanf("%d",&n);
    printf("Now enter the matrix");
    int a[n][n];
    int lrd=0,rld=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            if (i==j)
            {
                lrd+=a[i][j];
            }
            if (i+j==n-1)
            {
                rld+=a[i][j];
            }
        }
    }
    printf("\nThe absolute difference is %d",abs(lrd-rld));
}