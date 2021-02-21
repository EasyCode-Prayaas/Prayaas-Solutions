
n = int(input())
arr = []
# rev = [0]*n
for i in range(n):
    temp = int(input())
    arr.append(temp)

print("\nOriginal",arr)

for j in range(n//2):
    arr[j],arr[n-j-1] = arr[n-j-1], arr[j]

# for i in range(n):
#     rev[i] = arr[n-1-i]

print("\nReversed",arr)
