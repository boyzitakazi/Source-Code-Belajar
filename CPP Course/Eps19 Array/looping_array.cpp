#include <iostream>
#include <array>
using namespace std;

int main(){
	// array std library
	// int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

	// array fungsi built-in
	array <int, 10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};

	// struktur looping array, untuk c++11 >
	/*
		for (declaration (reference) : array){
			statement
		}
	*/


	for (int nilai : arrayNilai){
		cout << nilai << endl;
	}

	cout << endl;
	// manipulasi array
	// menggunakan reference karena untuk menyamakan alamat memorinya
	for (int &nilai : arrayNilai){
		nilai += 1;
		cout << "address " << &nilai << " nilainya " << nilai << endl;
	}

	cout << endl;
	// menampilkan array
	for (int nilai : arrayNilai){
		cout << "address " << &nilai << " nilainya " << nilai << endl;
	}

	cout << endl;
	return 0;
}