#include<stdio.h>
int main ()
{
    int m,n,t,i,j,k,f=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        int a[n+1];
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for (i=1;i<=n;i++)
        {
            int d = m - a[i];
            if (d>0)
            {
                for(j=i+1;j<=n;j++)
                {
                    if(d==a[j])
                    {
                        f=1;
                        break;
                    }



                }
            }
            if( f==1)
            break;

        }
        if (f==1)
        {
            if(i>j)
            printf("%d %d\n",j,i);
            else
            printf("%d %d\n",i,j);
        }
        f=0;





    }

return 0;
}


