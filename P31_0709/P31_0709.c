#include<stdio.h>

int main()
{
    float l,b,h;

    //Taking innput from user
    printf("Enter the values of length, breadth and height of fridge:");
    scanf("%f%f%f",&l,&b,&h);

    //Checking the height of fridge first
    if(h>10)
    {
        printf("Fridge cannot be passed through the door");
    }

    else
    {
        if(l<=5 || b<=5)
        {
            printf("The volume of fridge is: %.2f",l*b*h);
        }

        else
        {
            printf("Fridge cannot be passed through the door");
        }
    }

    return 0;
}
