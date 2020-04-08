# Python program for implementation of MergeSort 
def mergeSort(arr): 
	if len(arr) >1: 
		mid = len(arr)//2 #temukan nilai tengah dari array 
		L = arr[:mid] # bagi array elements jadi 2 bagian
		R = arr[mid:] # 

		mergeSort(L) # urutkan bagian pertama 
		mergeSort(R) # urutkan bagian ke dua 

		i = j = k = 0
		
		# Copy data ke array di penampungan sementara L[] and R[] 
		while i < len(L) and j < len(R): 
			if L[i] < R[j]: 
				arr[k] = L[i] 
				i+=1
			else: 
				arr[k] = R[j] 
				j+=1
			k+=1
		
		# Check jika ada element yang tersisa
		while i < len(L): 
			arr[k] = L[i] 
			i+=1
			k+=1
		
		while j < len(R): 
			arr[k] = R[j] 
			j+=1
			k+=1

# Code untuk mencetak list
def printList(arr): 
	for i in range(len(arr)):		 
		print(arr[i],end=" ") 
	print() 

# fungsi main 
if __name__ == '__main__': 
	arr = [12, 11, 13, 5, 6, 7] 
	print ("Given array is", end="\n") 
	printList(arr) 
	mergeSort(arr) 
	print("Sorted array is: ", end="\n") 
	printList(arr) 

# This code is contributed by Mayank Khanna 
