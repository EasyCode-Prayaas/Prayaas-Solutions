print("Enter the number of subjects:")
n=int(input())
print("Enter the marks: ")
arr=input().split()
for i in range (0,n):
    arr[i]=int(arr[i])

print("Enter the gender of student: ")
gender=input()
sum = 0

for i in range(0,n):
    if(gender=='g'):
        if(i%2!=0):
            sum = sum + arr[i]
    else:
        if(i%2==0):
            sum = sum + arr[i]
print(sum)