#include <iostream>
using namespace std;

// BASIC ARRAY PADA PEMROGRAMAN
// pengenalan tipe data array
// array menggunakan alamat memori dengan urut
// array merupakan kumpulan data

int main(){
	// menggunakan inisialisasi
	int arr[5] = {1,2,3,4,5};

	// menggunakan deklarasi
	//int arr[5];

	// indexing pada array
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	// memanggil nilai pada array
	cout << &arr[0] << " nilainya adalah " << arr[0] << endl;
	cout << &arr[1] << " nilainya adalah " << arr[1] << endl;
	cout << &arr[2] << " nilainya adalah " << arr[2] << endl;
	cout << &arr[3] << " nilainya adalah " << arr[3] << endl;
	cout << &arr[4] << " nilainya adalah " << arr[4] << endl;

	// memanggil array menggunakan pointer
	int *arrPtr = arr;

	// mengganti nilai menggunakan alamat pada pointer
	// ini contoh untuk meyakinkan bahwa array itu menggunakan alamat yang urut
	*(arrPtr + 3) = 60;

	cout << endl;
	cout << &arr[0] << " nilainya adalah " << arrPtr[0] << endl;
	cout << &arr[1] << " nilainya adalah " << &arrPtr[1] << endl;
	cout << &arr[2] << " nilainya adalah " << arr[2] << endl;
	cout << &arr[3] << " nilainya adalah " << &arrPtr[3] << endl;
	cout << &arr[4] << " nilainya adalah " << arr[4] << endl;

	// melihat ukuran array
	cout << endl;
	cout << "ukuran array " << sizeof(arr) << " Byte" << endl;
	cout << "jumlah member " << sizeof(arr)/sizeof(int) << endl;

	/* code */
	return 0;
}