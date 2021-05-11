#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s[100];
    printf("Enter a string:");
    scanf("%s",&s);

    for(int i=0; i<=strlen(s)-3; i+=3)
    {
        if(s[i]!='S')
        {
            count+=1;
        }
        if(s[i+1]!='O')
        {
            count+=1;
        }
        if(s[i+2]!='S')
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}