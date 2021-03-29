arr = list(map(int, input().split()))
k = int(input())

index = 0
maxx = 0
for i in range(k):
    maxx = 0
    index = 0
    for j in range(len(arr)):
        if maxx < arr[j]:
            maxx = arr[j]
            index = j

    print(maxx, end=" ")
    arr[index] = 0
