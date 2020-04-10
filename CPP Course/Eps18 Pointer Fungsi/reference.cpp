#include <iostream>
using namespace std;

// Reference merupakan

int main(){
	// deklarasi
	int a = 10;

	// tampilkan alamat memori a
	cout << "      Alamat memori a " << &a << endl;
	// tampilkan nilai a
	cout << "Nilai alamat memori a " << a << endl << endl;

	// referencing
	int &b = a;
	cout << "Nilai alamat memori a " << b << endl;
	cout << "Nilai alamat memori a " << &b << endl;


	return 0;
}