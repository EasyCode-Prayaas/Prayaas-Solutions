#include <stdio.h>

int main()
{
    int n; scanf("%d", &n); 
    int zeros = 0; // Counts no. of zeros in the array
    
    // creating hash arrays for positive and negative numbers
    int negNums[1000] = {0}; int posNums[1000] = {0}; 
    
    // Taking elements of array from user and updating the respective hash arrays
    for (int i = 0; i < 1000; i++)
    {
        int ele;
        scanf("%d", &ele);
        if (ele < 0)
        {
            negNums[-ele] = 1;
        }
        else if (ele > 0)
        {
            posNums[ele] = 1;
        }
        else
        {
            zeros++;
        }
    }
    printf("[ ");
    
    // Comparing both the hash arrays to check for duplets and printing all duplets
    for (int i = 1; i < 1000; i++)
    {
        if ((negNums[i] == 1) && (posNums[i] == 1))
        {
            printf("[%d, %d], ", i, -i);
        }
    }
    
    // Checking whether [0, 0] can be a duplet
    if (zeros >= 2)
    {
        printf("[0, 0] ");
    }
    printf("]");
    


    return 0;
}
