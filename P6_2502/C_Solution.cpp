#include <stdio.h> 
unsigned int ECC(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * ECC(n - 1); 
} 
  
int main() 
{ 
    int num;
    printf("Enter the number:-\n");
    scanf("%d",&num); 
    printf("Ans is %d", num, ECC(num)); 
    return 0; 
}