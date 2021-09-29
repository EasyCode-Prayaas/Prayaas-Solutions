#include<stdio.h>
#include<string.h>

int main() 
{
    int Y, mm, ss ;
    char X[3];
    scanf("%d:%d:%d%s", &Y, &mm, &ss, X) ;

    if (strcmp(X,"PM")==0 && Y!=12) Y += 12 ;
    if (strcmp(X,"AM")==0 && Y==12) Y = 0 ;

    printf("%02d:%02d:%02d", Y, mm, ss) ;
    return 0;
}