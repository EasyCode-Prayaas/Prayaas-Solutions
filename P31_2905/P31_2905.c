#include<stdio.h>

int fun(int n)
{
	int sum,a; 
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		a= n%10;
		n= n/10;
		sum = a + fun(n);
		return sum;
	}
}

int main()
{
	int num,ans;
	printf("Enter the number and I will tell you the sum of digits\n");
	scanf("%d",&num);
	
	ans = fun(num);
	
	printf("The sum is %d\n",ans);	
}
