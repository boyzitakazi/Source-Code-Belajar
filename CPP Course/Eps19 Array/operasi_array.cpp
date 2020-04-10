#include <iostream>
#include <array>
using namespace std;

int main(){

	// membuat array dasar
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	// membuat array menggunakan standard library
	// struktur array <data type, banyak data> nama;
	array<int, 10> nilai;

	// panggil menggunakan looping
	for (int i = 0; i <= 9; ++i){
		nilai[i] = i;
		cout << "nilai array ke-" << i+1 << " adalah " << nilai[i];
		cout << " alamat memorinya adalah : " << &nilai[i] << endl;
	}

	cout << endl;
	// menghitung nilai array
	cout << nilai.size() << endl;
	cout << nilai.begin() << endl;
	cout << nilai.end() << endl;
	cout << nilai.at(8) << endl;
	cout << nilai.max_size() << endl;

	return 0;
}