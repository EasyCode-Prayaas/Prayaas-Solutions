#include<stdio.h>

int main()
{
    int n,id=0,maxx=0;
    scanf("%d",&n);
    int arr[n];
    int extra[4] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }

    for (int i=0;i<n;i++)
    {
	extra[arr[i]]+=1;
    }
    
    for (int i=0;i<4;i++)
    {
	if(maxx<extra[i])
	{
		maxx = extra[i];
		id = i;
	}
    }
	
    printf("\n%d",i);
      
}