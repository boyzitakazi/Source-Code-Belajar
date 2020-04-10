// prototype pada fungsi bisa disebut dengan deklarasi pada fungsi
#include <iostream>
using namespace std;

// membuat fungsi
// prototyping
double mencari_luas(double p, double l);
void println(double x);

int main(){
	// deklarasi
	double hasil, panjang, lebar;

	// menampilkan pada screen & inputan
	cout << "Masukan panjang : ";
	cin >> panjang;
	cout << "Masukan lebar : ";
	cin >> lebar;

	hasil = mencari_luas(panjang,lebar);
	println(hasil);

	return 0;
}

// fungsi setelah fungsi utama
double mencari_luas(double p, double l){
	return p*l;
}

// menggunakan deklarasi pada fungsi atau kita sebut dengan prototyping
void println(double x){
	cout << "hasil " << x << endl;
}