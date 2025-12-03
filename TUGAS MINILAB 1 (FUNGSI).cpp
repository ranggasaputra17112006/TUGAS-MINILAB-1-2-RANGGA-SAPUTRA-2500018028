#include <iostream>
using namespace std;

double penjumlahan(double a, double b){
	return a + b;
}
double pengurangan(double a, double b){
	return a - b;
}
double perkalian(double a, double b){
	return a * b;
}
double pembagian(double a, double b){
	if (b == 0){
		cout<<"Pembagi Dilarang Angka 0!"<<endl;
		return 0;
	}
	return a / b;
}

int main(){
	string nama;
	int menu;
	double angka1, angka2, hasil;
	char lanjut;
	
	cout<<"================================================="<<endl;
	cout<<"|Selamat Datang di Program kalkulator Sederhana!|"<<endl;
	cout<<"================================================="<<endl;
	do{
		cout<<"1. Penjumlahan"<<endl;
		cout<<"2. Pengurangan"<<endl;
		cout<<"3. Perkalian"<<endl;
		cout<<"4. Pembagian"<<endl;
		cout<<"Silahkan Pilih Menu: ";
		cin>>menu;
		
		switch (menu){
			case 1:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "\nAnda memilih menu penjumlahan!" << endl;
                hasil = penjumlahan(angka1, angka2);
                cout << "Hasil dari peng-operasian: " << hasil << endl;
                break;
                
			case 2:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "\nAnda memilih menu pengurangan!" << endl;
                hasil = pengurangan(angka1, angka2);
                cout << "Hasil dari peng-operasian: " << hasil << endl;
                break;

			case 3:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "\nAnda memilih menu perkalian!" << endl;
                hasil = perkalian(angka1, angka2);
                cout << "Hasil dari peng-operasian: " << hasil << endl;
                break;

			case 4:
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "\nAnda memilih menu pembagian!" << endl;
                hasil = pembagian(angka1, angka2);
                cout << "Hasil dari peng-operasian: " << hasil << endl;
                break;

			default:
				cout<<"\n Pilihan Tidak Ada"<<endl;
				break;
		}
		cout<<"Apakah anda ingin melanjutkan program? ketik (y/n): ";
		cin>>lanjut;
		cout<<endl;
	} while (lanjut == 'y' || lanjut == 'Y');
	cout<<"\nTerimakasih telah menggunakan kalkulator ini!"<<endl;
	cout<<"================================================="<<endl;
	return 0;
}
