#include<iostream>
using namespace std;
void logIn();
void menu();
void selamat();
void bayar();
void infoSiswa();
void bayarSpp();
void bayarDll();
void bayarQurban();
void beliPaketan();
int main() {
	    
	system("color 9F");

selamat();
logIn();
}


void selamat(){
cout << "--------------------------------------------------------------\n";
cout << "Selamat Datang Di aplikasi sistem administrasi pesantren kami \n";
cout<< "                   pondok pesantren darul kholidin             \n";
cout << "-------------------------------------------------------------\n\n";
}
void cls(){
	system("cls");
}
void logIn(){ 

   int username, password;
   int i;

  int user =12345;
  int pass = 12345;
  i = 1;
   do {
   	
       cout << "Username : "; cin >> username;
      cout << "Password : "; cin >> password;
      

       if (username = user && password == pass) {
         cout << "\n--------------------------------------------------------------\n";
          cout << "Anda Berhasil Login" << endl;
         cout << "--------------------------------------------------------------\n\n";
         cls();
        menu();
      } else {
          cout << "\n-------------------------------------------------------------\n";
          cout << "Maaf ID & PASSWORD Salah!" << endl;
         cout << "--------------------------------------------------------------\n\n";
         i = i +1;
      }
   }
   while (i <= 3);

   cout << "Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
   cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";

   
}

void infoSiswa(){
	cls();
	selamat();
	cout<<"--------------------Info santri----------------"<<endl;
	cout<<"nama : muhammad yazid supriadi"<<endl;
	cout<<"NIS :0110217042"<<endl;
	cout<<"TTL :jakarta,14 juni 1999"<<endl;
	cout<<"Usia : 15 tahun "<<endl;
	cout<<"Kelas : 1 sma/al fashlul awwal fi madrasatil aliyyah"<<endl;
	cout<<"Tempat tinggal : Jln.HJ.Rasuna said jakarta "<<endl;
	cout<<"status : santri aktif"<<endl;
	cout<<endl;
	int nilai;
	cout<<"apakah anda ingin melihat nilai anak anda "<<endl;
	cout<<" mau lihat nilai semester berapa = ";
	cin>>nilai;
	if (nilai==1){
		cout<<"nilai semester 1"<<endl;
		cout<<"=================================="<<endl;
		cout<<"fiqih =9"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"hadist = 8"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"tarikhul islam=8"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"ulumul quran=7"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"musthalah hadist =7"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"ushul fiqih =9"<<endl;
		cout<<"------------------------------"<<endl;
	}else if(nilai=2){
		cout<<"nilai semester 2"<<endl;
		cout<<"=================================="<<endl;
		cout<<"fiqih =7"<<endl;
				cout<<"------------------------------"<<endl;

		cout<<"hadist = 9"<<endl;
				cout<<"------------------------------"<<endl;

		cout<<"tarikhul islam=9"<<endl;
				cout<<"------------------------------"<<endl;

		cout<<"ulumul quran=8"<<endl;
				cout<<"------------------------------"<<endl;

		cout<<"musthalah hadist =7"<<endl;
				cout<<"------------------------------"<<endl;

		cout<<"ushul fiqih =8"<<endl;
				cout<<"------------------------------"<<endl;

	}
	else{
		cout<<"tidak ada";
	}
	cout<<endl;
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
	
	cls();
	menu();	
}else{

	infoSiswa();
}
}
void bayarSpp(){
	
	
		int setor;
		int biaya,bulan;
	
    biaya=500000;
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran Spp                   |\n";
cout<<"|===================================================|\n";
cout<<"masukan jumlah bulan = ";
cin>>bulan;
    biaya = biaya*bulan;

cout<<" jumlah yang harus dibayarkan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah uang yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang=setor-biaya;
	
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!,silahkan coba lagi!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
	cls();
	bayar();

}else{
cls();
selamat();
	bayarSpp();	
}
}

void kitabKelas1(){
		int setor;
		int biaya;
		selamat();
    biaya=170000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran kitab         |\n";
cout<<"|===================================================|\n";
cout<<" Daftar kitab  = "<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" durusullughah =100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" ushuludin  =80000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" almuthalaat alhadistsah =70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" tafsir jalalain =600000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" anwarul masalik =400000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" akhlaqul allibanin =100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" khulasah nurul yaqin juz 1=100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" majmuat = 25000"<<endl;
cout<<"|---------------------------------------------------|\n";





cout<<"total tagihan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil";
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!";
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
	cls();
	
	beliPaketan();

}else{
cls();
selamat();
	kitabKelas1();	
}
}
void kitabKelas2(){
		int setor;
		int biaya;
		selamat();
    biaya=105000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran kitab         |\n";
cout<<"|===================================================|\n";
cout<<" Daftar kitab  = "<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" jurumiyah =8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" kailani  =8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" tijan addarary =70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" fathul muin =15000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" alqiraturrrayidah =8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" hadist arbain nabawi =6000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" tuhfatul athfal =3000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" alnawul wadih =10000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" qawaidussharfiyyah =20000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" tasrif =5000"<<endl;
cout<<"|---------------------------------------------------|\n";




cout<<"total tagihan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil";
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!";
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
		cls();
	
	beliPaketan();

}else{
cls();
selamat();
	kitabKelas2();
}
}
void kitabKelas3(){
			int setor;
		int biaya;
		selamat();
    biaya=47000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran kitab         |\n";
cout<<"|===================================================|\n";
cout<<" Daftar kitab  = "<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" fathul majid =10000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" bulugul maram  =30000"<<endl;
cout<<"|---------------------------------------------------|\n";
cout<<" khulasah nurul yaqin juz 2 =7000"<<endl;
cout<<"|---------------------------------------------------|\n";





cout<<"total tagihan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil";
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!";
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();
	
	beliPaketan();
}else{
	
	cls();
selamat();
	kitabKelas3();
}
}
void kitabSma(){
		int setor;
		int biaya;
		selamat();
    biaya=88000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran kitab         |\n";
cout<<"|===================================================|\n";
cout<<" Daftar kitab  = "<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" kawakibuzzuriyah =30000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" safinatunnajah  =8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" tibyan =70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" mustahlahul hadis =15000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" nahwul wadih juz 2 =8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" khulasah nurul yaqin juz 3 =10000"<<endl;
cout<<"|---------------------------------------------------|\n";


cout<<" alnawul wadih juz 2 =10000"<<endl;
cout<<"|---------------------------------------------------|\n";




cout<<"total tagihan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
		cls();
	
	beliPaketan();

}else{
	cls();
selamat();
	kitabSma();
}
}
void beliPaketan(){
	
	
	selamat();
	
	int pilihan;
		do{
		
	
	cout<<"----------------------------------"<<endl;
	cout<<"menu pembelian kitab :"<<endl;		
	cout<<"----------------------------------"<<endl;
	cout<<"1. kelas 1  "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"2. kelas 2   "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"3. kelas 3   "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"4. SMA  "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"5. kembali  "<<endl;
	cout<<"-----------------------------------"<<endl;


	
		

	cout<<"masukan pilihan yang ingin anda pilih : "<<endl;
	
	cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			cls();
			kitabKelas1();	
			break;
		case 2:
			cls();
			kitabKelas2();	

			break;
		case 3:
			cls();
			kitabKelas3();
			break;
		case 4:
			cls();
			kitabSma();
			break;
		case 5:	
			bayar();
		
		default:
      cout << "Pilihan tidak tersedia" << endl;
      menu();
			break;
			}
	} while (pilihan!=6);
}
void beliSatuan(){
	char kobar, buku, bns, beli, lagi;
float  jumbel,setor, harga;
kembali:
cout<<""<<endl;
cout<<"Daftar kitab = ";
cout<<"|---------------------------------------------------|\n";

cout<<" 1.durusullughah               | harga= 100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 2.ushuludin                   | harga =80000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 3.almuthalaat alhadistsah     | harga = 70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 4.tafsir jalalain             | harga =600000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 5.anwarul masalik             | harga = 400000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 6.akhlaqul allibanin          | harga = 100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 7.khulasah nurul yaqin juz 1  | harga = 100000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 8.majmuat                     | harga = 25000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 9.jurumiyah                   | harga = 8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 10.kailani                     | harga = 8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 11.tijan addarary              | harga = 70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 12.fathul muin                 | harga = 15000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 13.alqiraturrrayidah           | harga = 8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 14.hadist arbain nabawi        | harga = 6000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 15.tuhfatul athfal             | harga = 3000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 16.alnawul wadih               | harga = 10000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 17.qawaidussharfiyyah          | harga = 20000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 18.tasrif                      | harga= 5000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 19.fathul majid                | harga= 10000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 20.bulugul maram               | harga =30000"<<endl;
cout<<"|---------------------------------------------------|\n";
cout<<" 21.khulasah nurul yaqin juz 2  | harga = 7000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 22.kawakibuzzuriyah            | harga= 30000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 23.safinatunnajah              | harga = 8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<"|24.tibyan                       |harga = 70000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 25.mustahlahul hadis           | harga = 15000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 26.nahwul wadih juz 2          | harga = 8000"<<endl;
cout<<"|---------------------------------------------------|\n";

cout<<" 27.khulasah nurul yaqin juz 3  | harga = 10000"<<endl;
cout<<"|---------------------------------------------------|\n";


cout<<" 28.alnawul wadih juz 2         | harga = 10000"<<endl;
cout<<"|---------------------------------------------------|\n";





cout<<" Masukkan Kode Buku [1..3]  : ";cin>>kobar;
cout<<" Jumlah Pembelian Buku Anda : ";cin>>jumbel;


cout<<""<<endl;
cout<<" Nama Buku yang Anda Beli     :"<<buku;
switch(kobar)
 {
  case ('1') :
      {
      cout<<"Durusullughah"<<buku;
      harga= 10000*jumbel ;
      }
      break;
  case ('2') :
      {
      cout<<"ushuluddin"<<buku;
      harga= 8000*jumbel;
      }
      break;
  case ('3') :
      {
      cout<<"almuthalaat alhadistsah"<<buku;
      harga= 7000*jumbel;
      }
      break;
   case ('4') :
      {
      cout<<"tafsir jalalain"<<buku;
      harga= 60000*jumbel;
      }
      break;   
	  case ('5') :
      {
      cout<<"anwarul masalik"<<buku;
      harga= 40000*jumbel;
      }
      break;  
       case ('6') :
      {
      cout<<"akhlaqul lilbanin"<<buku;
      harga= 10000*jumbel;
      }
      break;
       case ('7') :
      {
      cout<<"khulasah nurul yaqin juz 1"<<buku;
      harga= 10000*jumbel;
      }
      break;
       case ('8') :
      {
      cout<<"majmuat"<<buku;
      harga= 25000*jumbel;
      }
      break;
       case ('9') :
      {
      cout<<"jurumiyah"<<buku;
      harga= 8000*jumbel;
      }
      break;
       case ('10') :
      {
      cout<<"kailani"<<buku;
      harga= 8000*jumbel;
      }
      break;
       case ('11') :
      {
      cout<<"tijan addarory"<<buku;
      harga= 7000*jumbel;
      }
      break;
       case ('12') :
      {
      cout<<"fathul muin"<<buku;
      harga= 15000*jumbel;
      }
      break;
       case ('13') :
      {
      cout<<"alqiraaturrasyidah"<<buku;
      harga= 8000*jumbel;
      }
      break;
       case ('14') :
      {
      cout<<"hadist arbain nawawi"<<buku;
      harga= 6000*jumbel;
      }
      break;
       case ('15') :
      {
      cout<<"tuhfatul athfal"<<buku;
      harga= 3000*jumbel;
      }
      break;
       case ('16') :
      {
      cout<<"alnahwul wadih"<<buku;
      harga= 10000*jumbel;
      }
      break;
       case ('17') :
      {
      cout<<"qawaidussharfiyyah"<<buku;
      harga= 20000*jumbel;
      }
      break;
       case ('18') :
      {
      cout<<"tasrif"<<buku;
      harga= 5000*jumbel;
      }
      break;
       case ('19') :
      {
      cout<<"fathul majid"<<buku;
      harga= 10000*jumbel;
      }
      break;
       case ('20') :
      {
      cout<<"bulugul maram"<<buku;
      harga= 30000*jumbel;
      }
      break;
       case ('21') :
      {
      cout<<"khulasah nurul yaqin juz 2"<<buku;
      harga= 7000*jumbel;
      }
      break;
       case ('22') :
      {
      cout<<"kawakibuzzuriyah"<<buku;
      harga= 30000*jumbel;
      }
      break;
       case ('23') :
      {
      cout<<"safinatunnajah"<<buku;
      harga= 8000*jumbel;
      }
      break;
       case ('24') :
      {
      cout<<"tibyan"<<buku;
      harga= 70000*jumbel;
      }
      break;
       case ('25') :
      {
      cout<<"almustalahul hadis"<<buku;
      harga= 15000*jumbel;
      }
      break;
       case ('26') :
      {
      cout<<""<<buku;
      harga= 7000*jumbel;
      }
      break;
       case ('27') :
      {
      cout<<"khulasah nurul yaqin juz 3"<<buku;
      harga= 10000*jumbel;
      }
      break;
       case ('28') :
      {
      cout<<"alnahwul wadih juz 2"<<buku;
      harga= 10000*jumbel;
      }
      break;
      default:
      	break;
 }
cout<<endl;
cout<<" Harga Buku yang Anda Beli    : Rp."<<harga<<endl;
cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==harga){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<harga){
	int kurang;
	kurang =setor-harga;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!"<<endl;
}else if(setor>harga){
	int kembalian;
	kembalian=setor-harga;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
} 
cout<<" Apa mau Input data lagi ???? : ";cin>>lagi;
if (lagi== 'Y' || lagi=='Y')
   {
   goto kembali;
   }

}
void bayarKitab(){
		int pilihan;
		do{
		
	
	cout<<"----------------------------------"<<endl;
	cout<<"menu pembelian kitab :"<<endl;		
	cout<<"----------------------------------"<<endl;
	cout<<"1. beli paketan  "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"2. beli satuan   "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"3.kembali"<<endl;
	cout<<"-----------------------------------"<<endl;


	
		

	cout<<"masukan pilihan yang ingin anda pilih : "<<endl;
	
	cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			cls();
				beliPaketan();
			break;
		case 2:
			cls();
				beliSatuan();

			break;
		case 3:
			bayar();
			break;
		
		default:
      cout << "Pilihan tidak tersedia" << endl;
      menu();
			break;
			}
	} while (pilihan!=5);
}

void qurban1(){
			int setor;
		int biaya,bulan;
	
    biaya=3000000;
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran Dana Qurban                   |\n";
cout<<"|===================================================|\n";


cout<<" jumlah yang harus dibayarkan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah uang yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang=setor-biaya;
	
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!,silahkan coba lagi!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
	
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();
selamat();
	qurban1();
}else{
	cls();
	selamat();
	bayarQurban();
}
}
void qurban2(){
	
			int setor;
		int biaya,bulan;
	
    biaya=40000000;
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran Dana Qurban                   |\n";
cout<<"|===================================================|\n";


cout<<" jumlah yang harus dibayarkan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah uang yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang=setor-biaya;
	
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!,silahkan coba lagi!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
	
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();
selamat();
	qurban2();
}else{
	cls();
	selamat();
	bayarQurban();
}
}
void qurban3(){
	
			int setor;
		int biaya,bulan;
	
    biaya=50000000;
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran Dana Qurban                   |\n";
cout<<"|===================================================|\n";


cout<<" jumlah yang harus dibayarkan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah uang yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil";
}else if(setor<biaya){
	int kurang;
	kurang=setor-biaya;
	
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!,silahkan coba lagi!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
	
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();
selamat();
	qurban3();
}else{
	cls();
	selamat();
	bayarQurban();
}
}
void qurban4(){
			int setor;
		int biaya,bulan;
	
    biaya=60000000;
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran dana qurban                   |\n";
cout<<"|===================================================|\n";


cout<<" jumlah yang harus dibayarkan = "<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah uang yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang=setor-biaya;
	
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!,silahkan coba lagi!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
	
}
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();
selamat();
	qurban4();
}else{
	cls();
	selamat();
	bayarQurban();
}
}

void bayarQurban(){	
int pilihan;
	do{
	
	cout<<"----------------------------------"<<endl;
	cout<<"menu pembayaran Qurban :"<<endl;		
	cout<<"----------------------------------"<<endl;
	cout<<"1. Rp.3000000 "<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"2. Rp.4000000"<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"3. Rp.5000000"<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"4. Rp.6000000"<<endl;
			cout<<"----------------------------------"<<endl;


	cout<<"5.kembali"<<endl;
			cout<<"----------------------------------"<<endl;		

	cout<<"masukan pilihan yang ingin anda pilih : "<<endl;
	
	cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			cls();
			selamat();
		qurban1();	
			break;
		case 2:
			cls();
			selamat();
		qurban2();	

			break;
		case 3:
			cls();
			selamat();
		qurban3();
			break;
		case 4:
			cls();
			selamat();
		qurban4();
			break;
		case 5:
			cls();
			bayar();
		
			break;
		
		default:
      cout << "Pilihan tidak tersedia" << endl;
      menu();
			break;
			}
	} while (pilihan!=5);
}
void bayarLaundry(){
		int setor;
		int biaya,bulan;
		
    biaya=120000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran laundry                   |\n";
cout<<"|===================================================|\n";
cout<<"masukan jumlah bulan = ";
cin>>bulan;
biaya = biaya*bulan;

cout<<"total tagihan"<<biaya<<endl;
cout<<"|===================================================|\n";

cout<<" Jumlah yang dibayarkan    :Rp. ";cin>>setor;

cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang =Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;
}
		char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
cls();

	cls();
	selamat();
	bayar();
}else{
	cls();
	selamat();
	bayarLaundry();
}
}


void bayarPramuka(){
	
		int setor;
		int biaya;
		int bulan;
		
    biaya=50000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran pramuka                   |\n";
cout<<"|===================================================|\n";
cout<<"mau bayar berapa bulan = ";cin>>bulan;
  biaya = biaya*bulan;

cout<<" Jumlah tagihan    :Rp. "<<biaya;
cout<<"|---------------------------------------------------|\n";
cout<<"jumlah yang dibayarkan = Rp.";cin>>setor;
cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp. "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;


}
		char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
	cls();
	selamat();
	bayarDll();
}else{
	cls();
selamat();
	bayarPramuka();
}
}
void bayarUjian(){
	
		int setor;
		int biaya,bulan;
		
    biaya=50000;
    
		
cout<<"|===================================================|\n";
cout<<"|                     Menu Pembayaran pramuka                   |\n";
cout<<"|===================================================|\n";
cout<<"mau bayar berapa bulan = "<<endl;cin>>bulan;
  biaya = biaya*bulan;

cout<<" Jumlah tagihan    :Rp.  "<<biaya;
cout<<"|---------------------------------------------------|\n";
cout<<"jumlah yang dibayarkan = Rp. ";cin>>setor;
cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda bayarkan     :Rp.  "<<setor<<endl;
if(setor==biaya){
	cout<<"pembayaran berhasil"<<endl;
}else if(setor<biaya){
	int kurang;
	kurang =setor-biaya;
	cout<<" uang yang anda masukan kurang = Rp."<<kurang<<endl;
	cout<<"pembayaran gagal!"<<endl;
}else if(setor>biaya){
	int kembalian;
	kembalian=setor-biaya;
	cout<<"uamg kembalianya adalah ="<<kembalian<<endl;

}
		char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
		cls();
	selamat();
	bayarDll();
}else{
	cls();
	selamat();
	bayarUjian();
}

}
void bayarDll(){
	int pilihan;
	
	cout<<"------------------------------------------------"<<endl;
	cout<<"1.bayar pramuka"<<endl;
		cout<<"------------------------------------------------"<<endl;

	cout<<"2.bayar ujian"<<endl;
		cout<<"------------------------------------------------"<<endl;

	cout<<"3.kembali"<<endl;
		cout<<"------------------------------------------------"<<endl;

	cout<<"masukan pilihan = ";
	cin>>pilihan;
	switch(pilihan){
		case 1:
			cls();
			selamat();
			bayarPramuka();
		    break;
		case 2:
			cls();
			selamat();
			bayarUjian();
			break;
		case 3:
			cls();
			bayar();
			
		default:
		break;	
	}
}
void bayar(){
	int pilihan;
	do{
	selamat();
	cout<<"----------------------------------"<<endl;
	cout<<"menu administrasi :"<<endl;		
	cout<<"----------------------------------"<<endl;
	cout<<"1. Bayar Spp "<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"2. bayar laundry"<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"3. beli kitab"<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"4.bayar qurban"<<endl;
			cout<<"----------------------------------"<<endl;

	cout<<"5.bayar yang lain"<<endl;
			cout<<"----------------------------------"<<endl;
	cout<<"6.kembali"<<endl;
			cout<<"----------------------------------"<<endl;		

	cout<<"masukan pilihan yang ingin anda pilih : "<<endl;
	
	cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			cls();
			selamat();
            bayarSpp();
			break;
		case 2:
			cls();
			selamat();
			bayarLaundry();

			break;
		case 3:
			cls();
			selamat();
			bayarKitab();

			break;
		case 4:
			cls();
			selamat();
			bayarQurban();

			break;
		case 5:
			cls();
			selamat();
			bayarDll();

			break;
		case 6:
			cls();
			menu();
		default:
      cout << "Pilihan tidak tersedia" << endl;
      menu();
			break;
			}
	} while (pilihan!=6);
}
void donasi(){
	int setor;
cout<<"|===================================================|\n";
cout<<"|                     Menu donasi                   |\n";
cout<<"|===================================================|\n";
cout<<" Jumlah donasi    :Rp. ";cin>>setor;


cout<<"|---------------------------------------------------|\n";
cout<<" jumlah uang yang anda donasikan     :Rp. "<<setor<<endl;
if(setor>0){

cout<<"  Donasi sukses !"<<endl;
}else{
	cout<<" Donasi gagal !"<<endl;
}
cout<<endl;
cout<<"|---------------------------------------------------|\n";
cout<<"terima kasih atas donasi anda.semoga apa yang anda lakukan dibalas dengan amalan yang berlipat ganda"<<endl;
cout<<"terima kasih";
cout<<endl;
cout<<endl;
cout<<endl;
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
		cls();
	menu();
}else{

		cls();
	donasi();
}
}
void ttgPondok(){
	cout<<"Kebahagiaan dunia akhirat adalah cita-cita setiap muslim, namun demikian sarana dan prasarana ke arah tersebut masih terasa belum banyak. sedangkan faktor penghambat tercapainya cita-cita itu semakin berkembang";
	cout<<" Yayasan Darul Kholidin menyadari bahwa cita-cita tersebut dapat diwujudkan melalui pendidikan yang diberikan kepada anak didik pendidikan yang dapat membentuk kepribadian muslim, pribadi yang berguna bagi nusa dan bangsa.";
cout<<"Untuk itulah Yayasan Darul Kholidin mendirikan Lembaga Pendidikan  Pondok Pesantren Darul Kholidin yang terdiri dari SMP / SMA Islam Terpadu bertempat di Kampung Sasak Desa Tegal Kecamatan Kemang Bogor."<<endl;
cout<<"Lingkungan Pondok Pesantren Darul Kholidin yang tenang, sejuk dan alami merupakan hal dasar yang sangat diperlukan dalam menciptakan suasana belajar yang nyaman dan kondusif, yang mendukung daya tangkap dan konsentrasi siswa dalam belajar. "<<endl;
cout<<"Pondok Pesantren Darul Kholidin berada di bawah pembinaan Yayasan Darul Kholidin yang didirikan oleh Al Magfurlah Fadhilatussyeikh KH. Abdul Hamid Abdul Halim Ad Daary."<<endl;
	char back;
	cout<<"Apakah Anda ingin kembali ke menu awal? [Y/N] : ";
cin>>back;
if(back=='Y'||back=='y')
{
	
}else{
	cls();
	menu();
}

}


void menu(){
	
	int pilihan, data;
	selamat();
	do {
		
		cout<<"----------------------------------"<<endl;
		cout << "1. info siswa"<<endl;
		cout<<"----------------------------------"<<endl;
        cout<<"2. pembayaran administrasi"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"3. donasi"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"4. tentang pesantren"<<endl;
        cout<<"----------------------------------"<<endl;
		cout<<"5. log out"<<endl;	
		cout<<"----------------------------------"<<endl;
		
		
		
		
		
		
	
        cout<<endl;
        cout<<" masukan pilihan nomor yang ingin anda lakukan : ";
		cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			
			cls();
            infoSiswa();
			

			

			break;
		case 2:
			cls();
			bayar();

			break;
		case 3:
			cls();
			selamat();
			donasi();

			break;
		case 4:
			cls();
			selamat();
			ttgPondok();

			break;
		case 5:
			cls();
			selamat();
			logIn();

			break;
		
		default:
      cout << "Pilihan tidak tersedia" << endl;
			break;
		}
	} while (pilihan!=5);
}


