n = int(input())
l = []

for i in range(n):
    l.append(int(input()))

ones = 0
zeros = 0

for i in l:
    if i == 0:
        zeros += 1
    else:
        ones += 1
i = 0

while(zeros):
    l[i] = 0
    i += 1
    zeros -= 1

while(ones):
    l[i] = 1
    i += 1
    ones -= 1

for i in l:
    print(i, end=" ")
