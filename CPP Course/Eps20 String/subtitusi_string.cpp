#include <iostream>
#include <string>
using namespace std;
// mengenal swap, replace, insert

int main(){
	string kalimat_1("Nama Saya nurcholis majid cah ganteng");
	string kalimat_2("sekolah di sma 1 patrol");

	// subtitusi string
	// sebelum melakukan subtitusi string
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;

	// melakukan swap/pertukaran tempat kalimat_1 dan kalimat_2
	kalimat_1.swap(kalimat_2);
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;

	// melakukan replace, mengganti kata tertentu/ kalimat tertentu
	// sebelumnya kita lakukan pencarian index terlebih dahulu
	kalimat_2.replace(kalimat_2.rfind('c'),11,"anak ke dua");
	kalimat_1.replace(kalimat_1.rfind('s'),3,"SMKN");
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl << endl;
	
	// melakukan insert, menambahkan element pada string
	kalimat_1.insert(kalimat_1.find(' '), " Saya");
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// itulah beberapa operasi string
}