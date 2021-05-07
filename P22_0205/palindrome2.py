def palindromeIndex(s):
    if s == s[::-1]:
        return -1
    a = list(s)
    for i in range(len(a)//2):
        if a[i] != a[len(a)-1-i]:
            a.pop(i)
            if a == a[::-1]:
                return i
            else:
                return (len(a)-i)
n=int(input())
for i in range(n):
    s=input()
    print(palindromeIndex(s))