#include <iostream>
using namespace std;

void urutan(int a[],int n)
{
	int jarak,i,j,temp;
	for(jarak=n/2 ;jarak>0 ;jarak/=2)								// Untuk langkah 1 membagi jumlah bilangan yang dimasukkan dengan 2
	{
		for(i=jarak ;i<n ;i+=1)										// Pengulangan untuk mencari nilai atau bilangannya
		{
			temp=a[i];												//  Meletakkan nilai a[i] pada variabel sementara yaitu temp
			for(j=i ;j>=jarak&&a[j-jarak]>temp ;j-=jarak)			//  membandingkan nilai antara bilangan pertama dengan bilangan yang jaraknya kita bagi di awal, 
				a[j]=a[j-jarak];									// Kodingan pada baris ke 7 yang menentukan jarak nilai yang kita bandingkan 
			a[j]=temp;												// jika nilai yang dibandingkan lebih kecil maka lakukan SWAP dengan menggunakan variabel penampung nilai 
		}															// sementara yaitu temp.
	}
}

int main()
{
	// Mendeklarasikan array dan variabel lainnya
	int a[20],i,n;
	
	// Meminta user memasukkan jumlah bilangannya dan memasukkan bilangan yang ingin diurutkan
	cout << "Masukkan jumlah elemen : ";
	cin >> n;
	
	cout << "Masukkan elemen array : ";
	for(i=0 ;i<n ;++i)
		cin >>a[i];												// Menampilakn elemen atau bilangan yang belum terurut
		
		
	urutan(a,n);												// Memanggil fungsi
	
	// Menampilakn bilangan yang telah diurutkan
	cout << "\n Array setelah di urutkan : \n";
	for(i=0 ;i<n ;++i)
		cout << a[i] << " ";
		
	return 0;
}
