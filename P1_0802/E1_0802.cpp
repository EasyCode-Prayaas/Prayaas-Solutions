#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    // int rev[n];
    printf("\nEnter Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        // rev[i] = arr[n - 1 - i];
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp= arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i]= temp;
    }

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}