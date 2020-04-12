#include <iostream>
#include <string>
using namespace std;


// menggunakan global scope
enum nama_hari{senin, selasa, rabu, kamis = 5, jumat, sabtu, minggu};

int main(){
	// deklarasi
	nama_hari sekarang;
	sekarang = senin;

	// kondisi
	if (sekarang >= 5){
		cout << "Hari ke-" << sekarang-1 << endl;
	} else if (sekarang < 5){
		cout << "Hari ke-" << sekarang+1 << endl;
	}

	cout << endl;
	// perulangan di enum
	for (int i = 0; i < 7; ++i){
		cout << sekarang+i << endl;
	}
	return 0;
}