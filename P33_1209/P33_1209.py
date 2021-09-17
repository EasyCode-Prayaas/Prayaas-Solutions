n = int(input())
k = int(input())
items = []
for i in range(n):
    items.append(int(input()))

sum = 0
for i in range(n):
    if(i == k):
        continue
    else:
        sum += items[i]
bill = sum/2
print(bill)
