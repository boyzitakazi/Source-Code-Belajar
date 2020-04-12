#include <iostream>
using namespace std;

/*enum merupakan tipe data yang sifatnya sama
dengan deklarasi, yang dimana enum berisi kumpulan
konstanta, enum termasuk kedalam tipe data bentukan
karena tipe data ini dibentuk sendiri oleh kita

contoh structure enum :

enum variabel {const, const1, const2, const3};

*/

// tipe data enum
enum warna {merah, kuning, ungu = 3, hijau, putih = 2,};
// indexing  0      1        3         4      2

int main(){
	// deklarasi
	warna kain;
	// inisialisasi
	kain = ungu;


	// menggunakan kondisi dan indexing
	if (kain == merah){
		cout << "Merah" << endl;
	} else if (kain == kuning){
		cout << "kuning" << endl;
	} else if (kain == 3){
		cout << "ungu" << endl;
	}

	// menampilkan hasilnya
	cout << kain << endl;

	return 0;
}


/*
mengapa menggunakan enum.? Karena enum akan memberikan 
efisiensi dan fleksibilitas dalam penggunaan memori.
Veriabel enum hanya akan mengambil satu nilai dari konstanta yang ada.
Sedangkan apabila kita menggunakan array atau struct, 
ukuran dari variabelnya akan mengikuti banyaknya isi dari array dan struct.
*/