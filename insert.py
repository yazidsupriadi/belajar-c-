# Fungsi untuk melakukan insertion sort
def insertionSort(arr): 
  
    # lakukan perulangan dari  1 to len(arr) 
    for i in range(1, len(arr)): 
  
        key = arr[i] 
  
        # pindahkan element dari arr[0..i-1], yang lebih besar dari key kedepan dari posisi sekarang
        j = i-1
        while j >=0 and key < arr[j] : 
                arr[j+1] = arr[j] 
                j -= 1
        arr[j+1] = key 
  
  
# sediakan untuk code tester 
arr = [12, 11, 13, 5, 6]

print ("before Sorted array is:",arr)  
insertionSort(arr) 

print ("Sorted array is:") 
for i in range(len(arr)): 
    print ("%d" %arr[i]) 



# This code is contributed by Mohit Kumra 