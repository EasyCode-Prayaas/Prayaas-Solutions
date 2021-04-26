/*  C++ program to rearrange
   positive and negative integers
   in alternate fashion while keeping
   the order of positive and negative numbers. */
#include <assert.h>
#include <iostream>
using namespace std;
 
// Utility function to right rotate all elements between
// [outofplace, cur]
void rightrotate(int arr[], int n, int outofplace, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}
 
void rearrange(int arr[], int n)
{
    int outofplace = -1;
 
    for (int index = 0; index < n; index++)
    {
        if (outofplace >= 0)
        {
            // find the item which must be moved into the
            // out-of-place entry if out-of-place entry is
            // positive and current entry is negative OR if
            // out-of-place entry is negative and current
            // entry is negative then right rotate
            //
            // [...-3, -4, -5, 6...] -->   [...6, -3, -4,
            // -5...]
            //      ^                          ^
            //      |                          |
            //     outofplace      -->      outofplace
            //
            if (((arr[index] >= 0) && (arr[outofplace] < 0))
                || ((arr[index] < 0)
                    && (arr[outofplace] >= 0)))
            {
                rightrotate(arr, n, outofplace, index);
 
                // the new out-of-place entry is now 2 steps
                // ahead
                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
        }
 
        // if no entry has been flagged out-of-place
        if (outofplace == -1) {
            // check if current entry is out-of-place
            if (((arr[index] >= 0) && (!(index & 0x01)))
                || ((arr[index] < 0) && (index & 0x01))) {
                outofplace = index;
            }
        }
    }
}
 
// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{
     
    int arr[] = { -5, -2, 5, 2,
                 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, n);
 
    rearrange(arr, n);
 
    printf("Rearranged array is \n");
    printArray(arr, n);
 
    return 0;
}