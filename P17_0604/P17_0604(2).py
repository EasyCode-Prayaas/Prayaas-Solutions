



def printRepeating(arr,size) :
	count = [0] * size
	print(" Repeating elements are ",end = "")
	for i in range(0, size) :
		if(count[arr[i]] == 1) :
			print(arr[i], end = " ")
		else :
			count[arr[i]] = count[arr[i]] + 1


# Driver code
arr = [4, 2, 4, 5, 2, 3, 1]
arr_size = len(arr)
printRepeating(arr, arr_size)


		
