def ECC(n):  
   if n == 1:  
       return n  
   else:  
       return n*ECC(n-1)  
 
num = int(input("Enter a number: "))  
 
if num < 0:  
   print("Sorry, factorial does not exist for negative numbers")  
elif num == 0:  
   print("The factorial of 0 is 1")  
else:  
   print("Answer is",ECC(num))  