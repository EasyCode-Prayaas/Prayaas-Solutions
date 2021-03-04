arr =[int(i) for i in input().split()]

extra = [0]*100

for i in arr:
    extra[i]+=1

print(max(extra))