#include <iostream>
using namespace std;

// struktur fungsi dengan kembalian yaitu return 
// contoh
// int namafungsi(argument/input){
//		inisialisasi a;
//		a = argument*1;					 
//		return a;                 si a akan masuk ke int fungsi namafungsi yang akan ditampilkan screen
// }


// fungsi keliling segitiga
int keliling(int ST, int SA){
	float luas;
	luas = 0.5 * ST * SA;
	return luas;
}

int main(int argc, char const *argv[]){
	float ST, SA, hasil;
	cout << "Masukan tinggi segitiga : ";
	cin >> ST;
	cout << "Masukan alas segitiga : ";
	cin >> SA;

	hasil = keliling(ST,SA);
	cout << "Luas segitiga adalah : " << hasil << " cm" << endl;

	/* code */
	return 0;
}