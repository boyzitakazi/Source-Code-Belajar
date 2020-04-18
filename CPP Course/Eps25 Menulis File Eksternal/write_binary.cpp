#include <iostream>
#include <fstream>
using namespace std;

// contoh menggunakan struct
struct Mahasiswa{
	int NIM;
	int NIK;
	char Gender;
};

// fungsi untuk menulis data ke file external
void menulis_data(Mahasiswa &maha, ofstream &myFile){
	myFile.write(reinterpret_cast<char*>(&maha), sizeof(Mahasiswa));
}

// fungsi untuk menulis data ke file external dengan menentukan posisi
void menulisByPosition(int posisi, Mahasiswa &maha, ofstream &myFile){
	// mencari posisi gunakan seekp di ofstream
	// nilai dari Mahasiswa diatas adalah 12 byte
	// 0------12------|------12------|------12------|

	myFile.seekp((posisi-1)*sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&maha), sizeof(Mahasiswa));
}

// main program
int main(){
	// deklarasi ofstream & Mahasiswa
	ofstream myFile;
	Mahasiswa mhs1, mhs2, mhs3;

	// membuka file, jika belum ada membuat file, dengan output menggunakan binary
	myFile.open("data.bin", ios::trunc | ios::out | ios::binary);
	
	// inisialisasi mhs1 dari Mahasiswa
	mhs1.NIM = 12111;
	mhs1.NIK = 321231111;
	mhs1.Gender = 'L';

	// inisialisasi mhs2 dari Mahasiswa
	mhs2.NIM = 12222;
	mhs2.NIK = 321232222;
	mhs2.Gender = 'P';

	// inisialisasi mhs3 dari Mahasiswa
	mhs3.NIM = 12333;
	mhs3.NIK = 321233333;
	mhs3.Gender = 'L';

	// memanggil fungsi menulis data
	menulis_data(mhs1, myFile);
	menulis_data(mhs2, myFile);
	menulis_data(mhs3, myFile);

	// menggunakan fungsi menulisByPosition
	mhs3.NIM = 111111;
	menulisByPosition(3, mhs3, myFile);

	// jangan lupa untuk menutup program
	myFile.close();

	return 0;
}