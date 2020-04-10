#include <iostream>
#include <string>
using namespace std;

// operasi sederhana pada string

int main(){
	string kata("Nurcholis Majid");

	// menampilkan string menggunakan indexing
	cout << kata[0] << " ";
	cout << kata[1] << " ";	
	cout << kata[2] << endl << endl;	

	// menampilkan string menggunakan indexing dengan function
	cout << kata.at(0) << " ";
	cout << kata.at(1) << " ";
	cout << kata.at(2) << endl << endl;

	// menggabungkan string
	string kata1("Nama");
	cout << kata1 << endl << endl;

	string kata2("Saya");
	kata1 += ' ' + kata2 + ' ' + kata;
	cout << kata1 << endl << endl;

	string kata3("adalah");
	kata2 += ' ' +  kata3 + ' ' + kata;
	cout << kata2 << endl << endl;

	// merubah nilai string
	string kata4("RUN");
	for (int i = 0; i < 3; ++i){
		kata[i] = kata4.at(i);
		cout << kata[i] << ' ';
	}

	cout << endl;

	// menampilkan string
	cout << endl << kata << endl;

	return 0;
}