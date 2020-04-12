#include <iostream>
using namespace std;

// comma operator
// contoh structure : 
// (expression1, expression2, expression3)
// menggunakan kurung dan yang akan dieksekusi adalah nilai terakhir
// keuntungan menggunakan comma adalah lebih efisien penggunaan-nya
// karena bisa menjadikan satu statement

void nilai(int val){
	cout << "Nilai : " << val << endl;
}

int main(){
	// contoh, kita punya nilai
	int a, b, c;

	// menggunakan comma operator
	a = ( b=1 , nilai(b) , c=5 , nilai(c) , (b+c));

	// tampilkan hasil a, maka yang akan dieksekusi adalah
	// expression terakhinya yaitu b + c
	cout << "Hasil : " << a << endl;

	return 0;
}