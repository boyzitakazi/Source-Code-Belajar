#include <iostream>
#include <array>
#include <algorithm> // ada method sorting
using namespace std;

// karena disini kita contohkan nilai tidak berubah-ubah maka
// menggunakan constanta/nilai tetap
const size_t pnj_array = 10;

// buat fungsi untuk menampilkan array
void printArray(array <int, pnj_array> nilai){
	// menggunakan alamat yang sama menggunakan reference
	for (int &i : nilai){
		cout << i << " ";
	}
}

int main(){
	// deklarasi
	int cari_nilai;
	int ketemu;
	array <int, pnj_array> nilaiArr = {9,5,3,7,6,2,4,1,8,0};


	// searching array
	cout << "cari nilai pada array : ";
	cin >> cari_nilai;

	// looping array
	sort(nilaiArr.begin(), nilaiArr.end());

	// mencari member di array menggunakan binary_search
	ketemu = binary_search(nilaiArr.begin(), nilaiArr.end(), cari_nilai);
	printArray(nilaiArr);

	cout << endl;

	// buat kondisi untuk ketemu nilai yang dicari
	if (ketemu){
		cout << "KETEMU" << endl;
	} else {
		cout << "TIDAK KETEMU" << endl;
	}

	cout << endl;
	return 0;
}


