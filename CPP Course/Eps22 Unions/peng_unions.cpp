#include <iostream>
using namespace std;

// union sama dengan struct 
// perbedaan-nya union dengan struct adalah
// jika struct 1 data memiliki beberapa komponen
// jika union 1 data memiliki beberapa bentuk, bisa berubah
// menjadi integer float char dan lainnya, dan 
// meski banyak bentuk tapi union memiliki 
// satu alamat memori yang sama sehingga tidak memakan 
// banyak tempat memori.
union nama {
	int int_value;
	char char_value[4];
};

int main(){
	// deklarasi dari union	
	nama nurcholis;
	
	// beri nilai pada char
	nurcholis.char_value[0] = 'a';
	nurcholis.char_value[1] = 'b';
	nurcholis.char_value[2] = 'c';
	nurcholis.char_value[3] = 'd';

	// kita tinggal memilih untuk memanggil bentuk seperti apa
	// apakah int atau char
	cout << nurcholis.int_value << endl;
	cout << nurcholis.char_value << endl;	

	cout << endl;
	// kesimpulan ketika salah satu bentuk di dalam union diubah
	// maka yang lainya akan ikut berubah contoh :
	nurcholis.int_value = 1000000;

	cout << nurcholis.int_value << endl;
	cout << nurcholis.char_value << endl;	
	return 0;
}