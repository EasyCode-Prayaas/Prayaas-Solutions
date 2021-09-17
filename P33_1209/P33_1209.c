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
   float sum=0;
   for(int i=0 ; i<n ; i++)
   {
       if(i == k)
       {
          continue;
       }
       else
       {
           sum += items[i];
       }
   }
   float bill;
   bill = sum/2;
   printf("%f",bill);
   return 0;
}