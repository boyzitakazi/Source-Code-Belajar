#include <iostream>
#include <string>
using namespace std;

// Operasi Pada String

int main(){
	string kata = "Nama Saya Nurcholis Majid!";
	cout << kata.size() << endl << endl;       // mengembalikan nilai string
	cout << kata.length() << endl << endl;    // mengembalikan nilai string
	cout << kata.max_size() << endl << endl; // mengembalikan nilai maksimal dari string
	cout << kata.empty() << endl << endl;   // cek apakah string kosong

	// looping string sama seperti char
	for (int i = 0; i < kata.size(); ++i){
		cout << kata.at(i) << ' ';
	}
	
	cout << endl;

	cout << endl << kata.front() << endl << endl; // mengambil huruf awal string
	cout << kata.back() << endl << endl; 		 // mengambil huruf akhir dari string
	cout << kata << endl; 						// print string

	return 0;
}