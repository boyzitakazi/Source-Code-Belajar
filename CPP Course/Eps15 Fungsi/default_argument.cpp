#include <iostream>
using namespace std;

// prototyping function
// default argumennya 1
int tambah(int a = 1, int b = 1);
int kali(int a = 1, int b = 1);
int bagi(int a = 1, int b = 1);

int main(){
	// deklarasi
	int tambah, kali, bagi;

	// call the function use unery
	tambah = ::tambah();
	kali   = ::kali();
	bagi   = ::bagi();

	// show the result
	cout << "Hasil = " << tambah << endl;
	cout << "Hasil = " << kali << endl;
	cout << "Hasil = " << bagi << endl;


	return 0;
}

// inisialisasi tambah
int tambah(int a, int b){
	return a+b;
}

// inisialisasi kali
int kali(int a, int b){
	return a*b;
}

// inisialisasi bagi
int bagi(int a, int b){
	return a/b;
}