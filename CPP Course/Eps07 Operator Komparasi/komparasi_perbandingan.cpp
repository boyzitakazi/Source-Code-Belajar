#include <iostream>
#include <limits>

using namespace std;

int main(){
	// Komparasi
	int a = 2;
	int b = 3;

	// deklarasi bool
	bool hasil1;

	/* Operator perbandingan
	jika nilainya 0 itu false
	jika nilainya 1 itu true */

	// Sebanding
	hasil1 = (a == b);
	cout << hasil1 << endl;

	// Tidak sebanding
	hasil1 = (a != b);
	cout << hasil1 << endl;

	// Lebih kecil
	hasil1 = (a < b);
	cout << hasil1 << endl;

	// Lebih besar
	hasil1 = (a > b);
	cout << hasil1 << endl;

	// Lebih kecil atau sebanding
	hasil1 = (a <= b); 
	cout << hasil1 << endl;

	// Lebih besar atau sebanding
	hasil1 = (a >= b);
	cout << hasil1 << endl;

	cout << sizeof(short);

	cin.get();
	return 0;
}