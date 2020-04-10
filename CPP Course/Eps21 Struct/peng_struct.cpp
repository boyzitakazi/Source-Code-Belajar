#include <iostream>
#include <string>
using namespace std;

// struct adalah data yang dibentuk oleh data
// misal pada buah jeruk yaitu memiliki element-element diantaranya
// warna, rasa, harga, berat
// dan struct ini sangat efective untuk membantu kita dalam memberikan
// variabel tanpa harus kita buat banyak2, contoh berikut merupakan data mahasiswa

struct mahasiswa{
	// deklarasi
	string name;
	unsigned int nim;
	string prodi;
	bool sex;
};

// contoh pada buah
struct buah{
	string name;
	float weight;
	int price;
	string taste;
};

int main(){
	// cara memanggilnya sama seperti deklarasi pada umumnya
	mahasiswa ftik;
	buah mangga;

	// inisialization mahasiswa
	ftik.name  = "Nurcholis Majid";
	ftik.nim   = 3212314411;
	ftik.prodi = "Fakultas Informatika";
	ftik.sex   = true;

	// inisialization buah
	mangga.name   = "Mangga Harumanis";
	mangga.weight = 120.50f;
	mangga.price  = 150000;
	mangga.taste  = "Sweet";
	
	// menampilkan data
	cout << "MAHASISWA" << endl;
	cout << "Name   : " << ftik.name << endl;
	cout << "NIM    : " << ftik.nim << endl;
	cout << "PRODI  : " << ftik.prodi << endl;
	if (ftik.sex == true){
		cout << "SEX    : " << "Laki Laki" << endl;
	} else {
		cout << "SEX    : " << "Perempuan" << endl;
	}

	cout << endl;

	cout << "BUAH" << endl;
	cout << "Name   : " << mangga.name << endl;
	cout << "Weight : " << mangga.weight << endl;
	cout << "Price  : " << mangga.price << endl;
	cout << "Taste  : " << mangga.taste << endl;

	return 0;
}