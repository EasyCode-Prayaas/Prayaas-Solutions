#include<stdio.h>
int main()
{
    int array[100],i,tallest=0,count=0,n;
    scanf("%d",&n);              //no. of elements in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>=tallest)
        {
            tallest=array[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==tallest)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}