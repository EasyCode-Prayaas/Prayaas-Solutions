# two loops
def icecreamParlor(m, arr):
    for i in range(len(arr)):
        for j in range(len(arr)):
            if i!=j and arr[i]+arr[j]==m:
                ii=min(i+1,j+1)
                jj=max(i+1,j+1)
                break
    return str(ii)+" "+str(jj)
for i in range(int(input())):
  m = int(input())
  n = int(input())
  arr = [int(i) for i in input().split()]
  print(icecreamParlor(m,arr))

