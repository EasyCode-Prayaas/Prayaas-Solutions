def sum_of_digit( n ):
    if n == 0:
        return 0
    else:
      return (n % 10 + sum_of_digit(int(n / 10)))
 
n = int(input())
s = sum_of_digit(n)
print("sum of digit in",n,"is",s)
