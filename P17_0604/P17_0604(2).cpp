#include<stdio.h>
#include<stdlib.h>

void printRepeating(int arr[], int size)
{
int *count = (int *)calloc(sizeof(int), (size - 2));
int i;

printf(" Repeating elements are ");
for(i = 0; i < size; i++)
{
	if(count[arr[i]] == 1)
	printf(" %d ", arr[i]);
	else
	count[arr[i]]++;
}
}	

int main()
{
int arr[] = {4, 2, 4, 5, 2, 3, 1};
int arr_size = sizeof(arr)/sizeof(arr[0]);
printRepeating(arr, arr_size);
getchar();
return 0;
}
