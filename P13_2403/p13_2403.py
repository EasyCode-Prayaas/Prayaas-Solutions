def firstNonRepeating(arr, n):
      
    for i in range(n):
        j = 0
        while(j < n):
            if (i != j and arr[i] == arr[j]):
                break
            j += 1
        if (j == n):
            return arr[i]
      
    return -1
      

arr = [ 8, 1, 8, 6, 7, 1 ]
n = len(arr)
print(firstNonRepeating(arr, n))