#include<stdio.h>

#include<string.h>

int main()

{

    int T,n,i;

    scanf("%d",&T);

    for(int k=0 ; k<T ; k++)

    {

        scanf("%d",&n);

        int arr[n];

        for(i=0 ; i<n ; i++)

        {

            scanf("%d",&arr[i]);

        }

        int ls=0,rs=0;

        for(i=0 ; i<n-1 ; i++)

        {

            ls += arr[i];

        }

        if(ls>rs && n!=1)

        {

            for(i=n-1 ; i>=1 ; i--)

            {

                ls -= arr[i-1];

                rs += arr[i];

                if(ls == rs)

                {

                    printf("YES\n");

                    break;

                }

                else if(rs > ls)

                {

                    printf("NO\n");

                    break;

                }

            }

        }

        else if(n == 1)

        {

            printf("YES\n");

        }

        else {

        printf("NO\n");

        }

    }

}
