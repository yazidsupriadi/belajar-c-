#include<iostream> 

using namespace std;

// Merges two subarrays dari arr[]. 
// sub array pertama  is arr[l..m] 
// sub array kedua is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* buat sebuah penampungan array sementara */
	int L[n1], R[n2]; 

	/* Copy data ke tempat penampungan array sementara 
	yaitu L[] and R[] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	/* Gabungkan tempat penyimpanan sementara kembali ke  arr[l..r]*/
	i = 0; // inisial index sub array pertama 
	j = 0; // inisial index sub array kedua 
	k = l; // inisial index sub array yang telah digabungkan 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* copy sisa elements pada L[], jika masih ada */
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* Copy sisa element pada  R[], jika masih ada */
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

/* l adalah index sebelah kiri and r is index sebelah kanan dari subarray
 arr yang akan di urutkan */
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 

		// urutkan bagian yang pertama dan kedua 
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 

		merge(arr, l, m, r); 
	} 
} 

/* fungsi untuk menampilkan nilai dari array */
void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout<< A[i]<<" "; 
	cout<< "\n"; 
} 

/* main fungsi */
int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 

	cout<<"Given array is \n"; 
	printArray(arr, arr_size); 

	mergeSort(arr, 0, arr_size - 1); 

	cout<<"\nSorted array is \n"; 
	printArray(arr, arr_size); 
	return 0; 
} 

