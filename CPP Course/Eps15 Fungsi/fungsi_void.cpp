#include <iostream> // std library
using namespace std; // kalau di python menggunakan as, misal import numpy as np

// fungsi tanpa kembalian (karena void tidak memiliki tipe data)
void tambah(int inp_a, int inp_b){ 
	// deklarasi
	int hasil;

	// inisialisasi
	hasil = inp_a + inp_b;
	//printing
	cout << inp_a << " + " << inp_b	<< " = " << hasil << endl;
}


int main(int argc, char const *argv[]){
	// deklarasi
	int kali, inp_a, inp_b, hasil;

	// input dari inp_a dan inp_b
	cout << "masukan nilai awal : ";
	cin >> inp_a;
	cout << "masukan nilai kedua : ";
	cin >> inp_b;

	// inisialisasi
	tambah(inp_a, inp_b);

	return 0;
}