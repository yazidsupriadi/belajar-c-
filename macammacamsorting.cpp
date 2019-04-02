#include<iostream>
using namespace std;

void tampil(int n,int data[]);
void selectionSort(int n,int data[]);
void selectionRecursive(int n,int data[]);
void selectionIterative(int n,int data[]);
void shellSort(int n,int data[]);
void shellRecursive(int n,int data[]);
void shellIterative(int n,int data[]);
void binarySort(int n,int data[]);
void binaryinsertionSortrekrusif(int n,int data[]);
void binaryIterative(int n,int data[]);
void binaryIterative(int n,int data[]);
void insertionSort(int n,int data[]);
void insertion(int n,int data[]);
void insertionIterative(int n,int data[]);

int main(){
	cout<<"       metode pengurutan     "<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"nama: muhammad yazid supriadi"<<endl;
	cout<<"Nim : 0110217042"<<endl;
	cout<<"jurusan :teknik informatika"<<endl;
	
	cout<<"-----------------------------------------------------"<<endl;
	
	
	int n;
	cout<<"masukan jumlah data = ";
	cin>>n;
	
	int data[n];
	for(int i=0;i<n;i++){
		cout<<"masukan data ="<<i+1<<" = ";
		cin>>data[i];
	}
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"data yang dimasukan ";
	tampil(n,data);
	cout<<"----------------------------------------------------------"<<endl;
	int menu;
	cout<<"metode sorting "<<endl;
	cout<<"1.selection sort"<<endl;
	cout<<"2.shell sort"<<endl;
	cout<<"3.binary sort"<<endl;
	cout<<"4.insertion sort "<<endl;
	
	
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<" masukan pilihan sorting = ";
	
	cout<<endl;
	
	cin>>menu;
		cout<<"---------------------------------------------------"<<endl;
	
	switch(menu){
		case 1:
			selectionSort(n,data);
			break;
		case 2:
			shellSort(n,data);
			break;
		case 3:
		    binarySort(n,data);
		    break;
		case 4:
		    insertionSort(n,data);
		    break;
		default:
			cout<<"data yang anda masukan salah";
					
	}
		cout<<"---------------------------------------------------"<<endl;
	
	cout<<"data hasil sorting ";
	tampil (n,data);
	
	cout<<"selesai"<<endl;

}

void tampil(int n,int data[]){
    for(int i = 0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}



	
void selectionSort(int n, int data[])
{
	int i;
	cout << "1. Iterative \n";
	cout << "2. Recursive \n";
	cout << "pilih = ";cin >>i;
	switch(i) {
		case 1: selectionIterative(n,data);
		break;
		case 2: selectionRecursive(n,data);
		break;
	}
}


void shellSort(int n, int data[])
{
	int i;
	cout << "1. Iterative \n";
	cout << "2. Recursive \n";
	cout << "pilih = ";cin >>i;
	switch(i) {
		case 1: 
		shellIterative(n,data);
		break;
		case 2:
		 shellRecursive(n,data);
		break;
	}
}

void binarySort(int n, int data[])
{
	int i;
	cout << "1. Iterative \n";
	cout << "2. Recursive \n";
	cout << "pilih = ";cin >>i;
	switch(i) {
		case 1: binaryIterative(n,data);
		break;
		case 2: 
		break;
	}
}

void insertionSort(int n, int data[])
{
	int i;
	cout << "1. iterative \n";
	cout << "2. Recursive \n";
	cout << "pilih = ";cin >>i;
	switch(i) {
		case 1: insertionIterative(n,data);
		break;
		case 2: insertion(n,data);
		break;
	}
}

//created by ;afrizal,mairat,everett
void selectionIterative(int n, int data[]){
 	
	int k, j, temp;
	int i = 0;
	while(i<n-1){
		k = i;
		j = i+1;
		while (j<n) {
			if (data[k]>data[j]){
				k = j;
			}
			j = j+1;
		}
		temp = data[i];
		data[i] = data[k];
		data[k] = temp;
		i++;
	}
}



//created by :fahmi,faris,jundi
void selectionRecursive(int n,int data[]){
	int i, j, kecil, temp;
 for (i=0; i<n; i++)
	 {
 		kecil=i;
 		for (j=i; j<n; j++)
 		{
 			if (data[kecil]>data[j])
 				{kecil = j;
			}
 		}
	temp = data [i];
 	data[i] = data[kecil];
 	data[kecil] = temp;
 		}
 }

//created by :huda ,rizky ,sahnal,fazri

void shellRecursive(int n, int data[])
{

int jarak,i,j,temp;
	for(jarak=n/2 ;jarak>0 ;jarak/=2)								// Untuk langkah 1 membagi jumlah bilangan yang dimasukkan dengan 2
	{
		for(i=jarak ;i<n ;i+=1)										// Pengulangan untuk mencari nilai atau bilangannya
		{
			temp=data[i];												//  Meletakkan nilai a[i] pada variabel sementara yaitu temp
			for(j=i ;j>=jarak&&data[j-jarak]>temp ;j-=jarak)			//  membandingkan nilai antara bilangan pertama dengan bilangan yang jaraknya kita bagi di awal, 
				data[j]=data[j-jarak];									// Kodingan pada baris ke 7 yang menentukan jarak nilai yang kita bandingkan 
			data[j]=temp;												// jika nilai yang dibandingkan lebih kecil maka lakukan SWAP dengan menggunakan variabel penampung nilai 
		}															// sementara yaitu temp.
	}
}

//created by ;syafitri,rafi akbar ,arius
void shellIterative(int n, int data[])
{
int j,k,i;
int num;
int temp;
for (int i=num/2 ;i>0 ;i=i/2)
	{
		for(j=i ;j<num ;j++)
		{
			for(k=j-1 ;k>=0 ;k+k-i)
			{
			if (data[k+i]>=data[k])
			{
				break;
			}
			else
			{
				temp=data[k];
				data[k]=data[k+i];
				data[k+i]=temp;
			}
		}
	}	
	}
}

//created by: chairil,yazid,farhan budiman
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


//created by:auzan ,dian ,ilham
void binaryIterative(int n,int data[]){
		int i=1;
	int j, x, l, r, m;
	while(i<10){
		x = data[i];
		l = 0;
		r = i-1;
		while(l<=r){
			m = (l+r)/2;
			if(x<data[m]){
				r = m-1;
			}
			else {
				l = m+1;
			}
		}
		j = i-1;
		while (j>=l){
			data[j+1] = data[j];
			j = j-1;
		}
		data[l] = x;
		i = i+1;
	}
}



//created by: adit,triastono,rafi s
void insertion(int n,int data[]){
	
    // Base case
    if (n <= 1)
        return;
 
    insertion(n-1, data);
 
    int temp = data[n-1];
    int j = n-2;
 
    while (j >= 0 && data[j] > temp)
    {
        data[j+1] = data[j];
        j--;
    }
    data[j+1] = temp;

}

//created by:ilham ,hauzani
void insertionIterative(int n,int data[]){
		int i=1;
	int j, x, l, r, m;
	while(i<10){
		x = data[i];
		l = 0;
		r = i-1;
		while(l<=r){
			m = (l+r)/2;
			if(x<data[m]){
				r = m-1;
			}
			else {
				l = m+1;
			}
		}
		j = i-1;
		while (j>=l){
			data[j+1] = data[j];
			j = j-1;
		}
		data[l] = x;
		i = i+1;
	}
	

}
