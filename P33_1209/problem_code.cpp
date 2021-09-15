#include<stdio.h>

int main()
{
   int n,k;
   scanf("%d%d",&n,&k);
   int items[n];
   for(int i=0 ; i<n ; i++)
   {
       scanf("%d",&items[i]);
   }
   int sum=0;
   for(int i=0 ; i<n ; i++)
   {
       if(i == k)
       {
          continue;
       }
       else{
           sum += items[i];
       }
   }
   int b_actual = sum/2;
   printf("%d",b_actual);
}
