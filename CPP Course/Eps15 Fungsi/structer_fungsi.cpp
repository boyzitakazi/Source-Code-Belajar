#include <iostream>
#include <cmath>
using namespace std;

// fungsi public
int Tambah(int a, int b){
	return a+b;
}

void Cetak(){
	cout << "Hello world" << endl;
}

// fungsi yang dapat di baca oleh CPU
int main(){
	int x;

	cout << "Masukan nilai x : ";
	cin >> x;

	float y = sqrt(x); // sqrt adalah fungsi dari cmath
	cout << "nilai X adalah = " << y << endl;

	Cetak();
	// menggunakan fungsi di atas
	cout << Tambah(1,2) << endl;
	/* code */
	return 0;
}