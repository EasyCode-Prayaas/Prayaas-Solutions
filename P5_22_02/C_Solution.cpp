#include <stdio.h>
int main()
{
    int n;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("\n====PATTERN====\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i * j == 0 || i == n - 1 || j == n - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
