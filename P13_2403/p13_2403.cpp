#include <stdio.h>

  
int firstNonRepeating(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                break;
        if (j == n)
            return arr[i];
    }
    return -1;
}
  

int main()
{
    int arr[] = { 8, 1, 8, 6, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d",firstNonRepeating(arr, n)); 
    return 0;
}