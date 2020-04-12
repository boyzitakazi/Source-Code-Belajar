#include <iostream>
using namespace std;


// casting operator
// mengubah tipe data, beritkut structure-nya :
// float a = 6.56;
// (int)a; ini dinamakan casting operator..


int main(){
	int   a = 5;
	float b = 6.67f;
	char  c = 'f';

	cout << "Sebelum = " << a << endl; // sebelum
	cout << "Sesudah = " << (float)a + 2.5 << endl << endl; // sesudah

	cout << "Sebelum = " << b << endl; // sebelum
	cout << "Sesudah = " << (int)b << endl << endl; // sesudah

	cout << "Sebelum = " << c << endl; // sebelum
	cout << "Sesudah = " << (int)c << endl << endl; // sebelum

	return 0;
}