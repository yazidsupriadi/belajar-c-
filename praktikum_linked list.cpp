#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}
int kosong(){
 if(tail == NULL) 
 return 1;
 else
  return 0;
}
void tambahDepan(int databaru){
  Node *baru;
  baru = new Node;
  baru->data = databaru;
  baru->next = NULL;
  if(kosong()==1){
          head=tail=baru;
          tail->next=NULL;
     }
  else {
         baru->next = head;
         head = baru;
  }
  cout<<"Data masuk\n";
}

void tambahTengah(int databaru){
Node *baru,*bantu;
baru = new Node;
baru->data = databaru;
baru->next = NULL;
if(kosong()==1){
head=baru;
tail=baru;
tail->next = NULL;
}
else {
tail->next = baru;
tail=baru;
}
cout<<"Data masuk\n";
}
void tambahBelakang(int databaru){
 Node *baru,*bantu;
 baru = new Node;
 baru->data = databaru;
 baru->next = NULL;
 if(kosong()==1){
 head=baru;
 tail=baru;
 tail->next = NULL;
 }
 else {
  tail->next = baru;
  tail=baru;
 }
 cout<<"Data masuk\n";
}

void tampil(){
 Node *bantu;
 bantu = head;
     if(kosong()==0){
          while(bantu!=NULL){
           cout<<bantu->data<<" ";
           bantu=bantu->next;
          }
     } else cout<<"Masih kosong\n";
  }

void ubahDepan(int data){
	head->data=data;
}
void ubahBelakang(int data){
	tail->data=data;
}
void hapusDepan(){
     Node *hapus;
     int d;
     if (kosong()==0){
          if(head!=tail){
           hapus = head;
           d = hapus->data;
           head = head->next;
           delete hapus;
          } else {
           d = tail->data;
           head=tail=NULL;
          }
     cout<<d<<"terhapus";
     } else cout<<"Masih kosong\n";
}

void hapusTengah(){
Node *bantu,*hapus;
int d;
if (kosong()==0){
if(head!=tail){
hapus = bantu;
d = hapus->data;
head = head->next;
delete hapus;
} else {
d = tail->data;
head=tail=NULL;
}
cout <<"terhapus\n";
} else cout<<"Masih kosong\n";
}

void hapusBelakang(){
     Node *bantu,*hapus;
     int d;
     if (kosong()==0){
      bantu = head;
          if(head!=tail){
               while(bantu->next!=tail){
                bantu = bantu->next;
               }
               hapus = tail;
               tail=bantu;
               d = hapus->data;
               delete hapus;
               tail->next = NULL;
            }else {
            d = tail->data;
             head=tail=NULL;
            }
      cout<<d<<" terhapus\n";
     } else cout<<"Masih kosong\n";
}
void clear()
{
        Node *bantu,*hapus;
        bantu = head;
        while(bantu!=NULL)
        {
            hapus = bantu;
            bantu = bantu->next;
            delete hapus;
        }
        head = NULL;
      cout<<"CLEAR";
}

main()
{
    int pil,databaru;

    do
    {
        
        cout<<endl<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   =  PROGRAM LINKED LIST    ="<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   = 1. Tambah Depan         ="<<endl;
        cout<<"   = 2. Tambah tengah        ="<<endl;
        cout<<"   = 3. Tambah Belakang      ="<<endl;
        cout<<"   = 4. Ubah depan             ="<<endl;
        cout<<"   = 5. Ubah belakang         ="<<endl;
        cout<<"   = 6. Hapus tengah        ="<<endl;
        cout<<"   = 7. Hapus tengah        ="<<endl;
        cout<<"   = 8. Hapus Belakang      ="<<endl;
        cout<<"   = 9. Tampil Data          ="<<endl;
        cout<<"   = 10. Clear                ="<<endl;
        cout<<"   = 11. Exit                 ="<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: {
                cout<<"Masukkan Data = ";
                cin>>databaru;
                tambahDepan(databaru);
                break;
            }
            case 2: {
                cout<<"Masukkan Data = ";
                cin>>databaru;
                tambahBelakang(databaru);
                break;
            }
            
            case 3: {
                cout<<"Masukkan Data = ";
                cin>>databaru;
                tambahTengah(databaru);
                break;
            }
            case 4: 
			{int data;
            	cout<<"masukan data = ";
            	cin>>data;
            	ubahDepan(data);
				break;
			}
			case 5:
				{int data;
				cout<<"masukan data = ";
				cin>>data;
				ubahBelakang(data);
				break;
				}
            case 6: {
                hapusDepan();
                break;
            }
             case 7: {
                hapusDepan();
                break;
            }
            case 8: {
                hapusBelakang();
                break;
            }
            case 9: {
                tampil();
                break;
            }
            case 10: {
                clear();
                break;
            }
           case 11: {
            return 0;
             break;
            }
        
            default : {
            cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia! ";
            }

        }
        
    }
    while(pil!=11);
}
