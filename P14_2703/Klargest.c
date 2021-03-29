#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k;
    printf("\nEnter no of largest elements: ");
    scanf("%d", &k);

    int maxx = 0;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        maxx = 0;
        j = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxx < arr[i])
            {
                maxx = arr[i];
                j = i;
            }
        }

        printf("%d ", maxx);
        arr[j] = 0;
    }
}