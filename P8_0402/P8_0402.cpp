#include<stdio.h>
int main()
{
    int yr;
    scanf("%d",&yr);
    int flag=0;
    
    while (flag==0)
    {
        yr++;
        int unit = yr%10;
        int ten  = (yr%100)/10;
        int hund = (yr%1000)/100;
        int thous= yr/1000;
        if (unit==ten || ten==thous || thous==hund || unit==thous|| unit==hund|| ten==hund)
        {
            flag=0;
        }
        else{
            flag=1;
        }
            
    }
    printf("Unique year: %d",yr);   
}