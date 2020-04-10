#include <iostream>
using namespace std;

// fungsi menghitung luas
double menghitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

// fungsi menghitung keliling
double menghitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

// fungsi menampilkan luas
void tampilkan_luas(double p, double l){
	cout << "menghitung luas segitiga : ";
	cout << menghitung_luas(p,l) << endl;
}

// fungsi menampilkan keliling
void tampilkan_keliling(double p, double l){
	cout << "menghitung keliling segitiga : ";
	cout << menghitung_keliling(p,l) << endl;
}


int main(int argc, char const *argv[])
{
	// deklarasi
	double hasil, panjang, lebar;

	// input nilai
	cout << "Menghitung luas dan keliling segitiga" << endl;
	cout << "Masukan nilai panjang : ";
	cin >> panjang;
	cout << "Masukan nilai lebar : ";
	cin >> lebar;

	// memanggil fungsi
	tampilkan_luas(panjang,lebar);
	tampilkan_keliling(panjang,lebar);


	return 0;
}