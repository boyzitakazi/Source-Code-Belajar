#include <iostream>
using namespace std;

int main(){
	// assigment / inisialisasi
	int a = 10;
	int b = 10;

	// increment terbagi menjadi 2
	// pre-increment sebelum simbol (++a)
	cout << "PRE-INCREMENT" << endl;
	cout << "Nilai awal : " << a << endl;
	cout << "pre-increment : " << ++a << endl;
	cout << "Nilai akhir : " << a << endl << endl;

	// post-increment sesudah simbol (a++)
	cout << "POST-INCREMENT" << endl;
	cout << "Nilai awal : " << a << endl;
	cout << "post-increment : " << a++ << endl;
	cout << "Nilai akhir : " << a << endl << endl;

	// deccrement terbagi menjadi 2
	// pre-decrement sebelum simbol (--a) 
	cout << "PRE-DECREMETN" << endl;
	cout << "Nilai awal : " << b << endl;
	cout << "pre-decrement : " << --b << endl;
	cout << "Nilai akhir : " << b << endl << endl;

	// post-decrement sesudah simbol (a--)
	cout << "POST-DECREMETN" << endl;
	cout << "Nilai awal : " << b << endl;
	cout << "post-decrement : " << b-- << endl;
	cout << "Nilai akhir : " << b << endl << endl;


	/* code */
	return 0;
}