n=int(input())
mat=[]
for i in range(n):
    row = [int(i) for i in input().split()]
    mat.append(row)
diag1,diag2=0,0
for i in range(n):
    for j in range(n):
        if i==j:
            diag1+=mat[i][j]
        if i+j==n-1:
            diag2+=mat[i][j]
ans=diag1-diag2
if ans<0:
    ans*=-1
print(ans)