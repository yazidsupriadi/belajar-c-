#include<iostream>
using namespace std;
void binaryinsertionSortrekrusif(int n,int data[]){
	int binarySearch(int data[],int item,int low,int high);
	int i, loc, j, k, selected;
 
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = data[i];
 
        // find location where selected sould be inseretd
        loc = binarySearch(data, selected, 0, j);
 
        // Move all elements after location to create space
        while (j >= loc)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = selected;
    }
}

int binarySearch(int data[], int item, int low, int high)
{
    if (high <= low)
        return (item > data[low])?  (low + 1): low;
 
    int mid = (low + high)/2;
 
    if(item == data[mid])
        return mid+1;
 
    if(item > data[mid])
        return binarySearch(data, item, mid+1, high);
    return binarySearch(data, item, low, mid-1);
}
int main()
{
	// Mendeklarasikan array dan variabel lainnya
	int data[20],i,n;
	
	// Meminta user memasukkan jumlah bilangannya dan memasukkan bilangan yang ingin diurutkan
	cout << "Masukkan jumlah elemen : ";
	cin >> n;
	
	cout << "Masukkan elemen array : ";
	for(i=0 ;i<n ;++i)
		cin >>data[i];												// Menampilakn elemen atau bilangan yang belum terurut
		
		
	binaryinsertionSortrekrusif(n,data);												// Memanggil fungsi
	
	// Menampilakn bilangan yang telah diurutkan
	cout << "\n Array setelah di urutkan : \n";
	for(i=0 ;i<n ;++i)
		cout << data[i] << " ";
		
	return 0;
}
