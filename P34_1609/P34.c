#include<stdio.h>
int main()
{
    int n, m, s;
    printf("Enter number of students:");
    scanf("%d", &n);

    printf("Enter number of sweets:");
    scanf("%d", &m);

    printf("Enter chair number:");
    scanf("%d", &s);

    int ans = s + m%n - 1;
    int final_ans = ans % n;

    if(ans!=0)
        {
            printf("%d", final_ans);
        }
    else
        {
            printf("%d", n);
        }

    return 0;

}