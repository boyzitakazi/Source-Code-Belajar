#include <iostream>

using namespace std;

int main(){
	// assigment kalo saya sebut inisialisasi
	int a = 10;
	cout << "Nilai awal adalah : " << a << endl;


	// operator assigment
	a += 1;
	cout << "hasil penjumlahan dengan 1 adalah : " << a << endl;

	a -= 1;
	cout << "hasil pengurangan dengan 1 adalah : " << a << endl;

	a /= 2;
	cout << "hasil pembagian dengan 2 adalah : " << a << endl;

	a *= 2;
	cout << "hasil perkalian dengan 2 adalah : " << a << endl;

	a %= 2;
	cout << "hasil modulus dengan 2 adalah : " << a << endl;

	return 0;
}