# one loop
def icecreamParlor(m, arr):
    dt={}
    for i in range(len(arr)):
        if m-arr[i] in dt:
            return str(dt[m-arr[i]])+" "+str(i+1)
        else:
            dt[arr[i]]=i+1

for i in range(int(input())):
  m = int(input())
  n = int(input())
  arr = [int(i) for i in input().split()]
  print(icecreamParlor(m,arr))

