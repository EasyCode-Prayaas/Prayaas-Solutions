#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the marks: ");
    for(int j=0; j<n; j++)
    {
        scanf("%d",&arr[j]);
    }

    printf("\n");
    char gender;
    printf("Enter the gender of student: ");
    scanf(" %c",&gender);


    int sum = 0;

    for(int i=0; i<n; i++)
    {
        if(gender=='g')
        {
            if(i%2!=0)
            {
                sum = sum + arr[i];
            }
        }

        else
        {
            if(i%2==0)
            {
                sum = sum + arr[i];
            }
        }

    }

    printf("%d",sum);

    return 0;
}

