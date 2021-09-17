print("Enter number of students:")
n=int(input())
print("Enter number of sweets:")
m=int(input())
print("Enter chair number:")
s=int(input())
ans=s+m%n-1
final_ans=ans%n

if ans!=0:
  print(final_ans)
else:
  print(n)