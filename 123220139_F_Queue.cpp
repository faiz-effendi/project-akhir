#include <iostream>
#include <string>
using namespace std;

struct dataMenuu{
  int pilMenu, jmlMenu;
};

struct iniData{
  dataMenuu dataMenu[10];
  string nama;
  int status, noMeja;
};
iniData dataQue[50];

void pesanMakan(){
  string nama;
  int pesananKe = 0, noMenu, jmlPesan;
  char lagi;

  cout << "Masukkan Nama anda\t: "; getline(cin>>ws, nama);
  cout << "\n--------------- MENU SUJU ---------------\n";
  cout << "1. Nasi Ayam Sambal Suju\n";
  cout << "2. Chicken Katsu\n";
  cout << "3. Chicken Teriyaki\n";
  cout << "4. Korean Spicy\n";
  cout << "5. Cremosa\n";
  cout << "6. Redvelvet\n";
  cout << "7. Chocolate\n";

  do{
    cout << "\nMenu Pesanan ke-" << ++pesananKe; 
    cout << "\nMasukkan no menu\t: "; cin >> noMenu;
    cout << "Jumlah yang dipesan\t: "; cin >> jmlPesan;

    cout << "\n Lagi (y/n) ? "; cin >> lagi;
  } while(lagi == 'y');

  system("pause"); cout << endl;
}

void lihatAntrian(){
  
}

void pelayananMakanan(){
  
}


int main(){
  int pil;

  cout << "+==============================+" << endl;
  cout << "|        Selamat Datang!       |" << endl;
  cout << "| PROGRAM PEMESANAN KEDAI SUJU |" << endl;
  cout << "+==============================+" << endl;
  cout << "| 1. Pesan Makanan             |" << endl;
  cout << "| 2. Lihat Antrian             |" << endl;
  cout << "| 3. Pelayanan Makanan         |" << endl;
  cout << "| 0. Exit                      |" << endl;
  cout << "+==============================+" << endl;
  cout << "Pilihan\t: "; cin >> pil;

  switch(pil){
    case 1: system("cls"); pesanMakan(); system("cls"); main();
      break;
    case 2: system("cls"); lihatAntrian(); system("cls"); main();
      break;
    case 3: system("cls"); pelayananMakanan(); system("cls"); main();
      break;
    case 0: 
      cout << "\n===============================" << endl;
      cout << "          Terimakasih!         " << endl;
      cout << "===============================" << endl;
      return 0; 
      break;
  }
}