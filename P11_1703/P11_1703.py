a = list(set([int(x) for x in input().split()]))
print([[a[i],a[i]*-1] for i in range(len(a)) if a[i]*-1 in a[i:]])  
