#include <iostream>
#include <fstream>
using namespace std;

// contoh menggunakan struct
struct Mahasiswa{
	int NIM;
	int NIK;
	char Gender;
};

// membuat fungsi membaca file dari external
Mahasiswa baca_data(int posisi, Mahasiswa &maha, ifstream &myFile){
	// jika ofstream seekp, maka ifstream mengguanak seekg
	// misal kita masukna 1 maka kurangi dng 1 hasilnya index ke 0, yang akan
	// ditampilkan yaitu index ke 0
	myFile.seekg((posisi-1)*sizeof(Mahasiswa));

	// menggunakan reinterpret_cast untuk mengkonvert menjadi binary
	myFile.read(reinterpret_cast<char*>(&maha), sizeof(Mahasiswa));

	// fungsi return
	return maha;
}


int main(){
	// deklarasi ifstream & Mahasiswa
	ifstream myFile;
	Mahasiswa data_bin;

	// membuka file dengan methode input, dan menggunakan binary
	// karena program yang akan kita baca adalah binary
	myFile.open("data.bin", ios::in | ios::binary);
	
	// panggil fungsi baca_data
	baca_data(1, data_bin, myFile);
	cout << "NIM 1 : " << data_bin.NIM << endl;
	
	baca_data(2, data_bin, myFile);
	cout << "NIM 2 : " << data_bin.NIM << endl;
	
	baca_data(3, data_bin, myFile);
	cout << "NIM 3 : " << data_bin.NIM << endl;

	// jangan lupa tutup program
	myFile.close();

	return 0;
}