#include<iostream>
using namespace std;

void tampil(int n,int data[]);
void bubbleRecursive(int n,int data[]);
void bubbleIteratif(int n,int data[]);

int main(){

    int n;
    cout<<"Masukkan jumlah data : ";
    cin>>n;

    int data[n];
    for(int i = 0;i<n;i++){
        cout<<"Masukkan data "<<i+1<<" : ";
        cin>>data[i];
    }

    cout<<"Data yang dimasukkan : ";
    tampil(n,data);

    int menu;
    cout<<"Pilih cara sorting\n";
    cout<<"1. Rekursif\n";
    cout<<"2. Iteratif\n";
    cout<<"Pilih salah satu[1-2]?";
    cin>>menu;
    switch(menu){
        case 1:
            bubbleRecursive(n,data);
            break;
        case 2:
            bubbleIteratif(n,data);
            break;
        default:
            cout<<"Maaf, inputan salah\n";
            break;
    }

    bubbleIteratif(n,data);
    cout<<"Data hasil sorting : ";
    tampil(n,data);
}

void bubbleIteratif(int n, int data[]){
    int temp;//nyimpen data sementara
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

void bubbleRecursive(int n,int data[] ){
    int temp;
    if(n ==1){
        return;
    }else{
        for(int i=0;i<n-1;i++){
            if(data[i]>data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
        bubbleRecursive(n-1,data);
    }
}

void tampil(int n, int data[]){
    for(int i = 0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}