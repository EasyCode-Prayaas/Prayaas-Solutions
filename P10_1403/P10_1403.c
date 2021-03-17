#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int zeros = 0;
    int ones = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeros++;
        else
            ones++;
    }

    i = 0;
    while (zeros)
    {
        arr[i] = 0;
        zeros--;
        i++;
    }

    while (ones)
    {
        arr[i] = 1;
        ones--;
        i++;
    }

    printf("\nOutput:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}