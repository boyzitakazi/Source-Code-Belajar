#include <iostream>
#include <string>
#include <array>
using namespace std;

// prototyping
// default argument
// overloading
// rekursif

int main(){
	string kata("Nama saya Nurcholis Majid");

	// operasi string
	// mencari member string menggunakan find
	cout << kata.find('M') << endl;
	// mencari substring menggunakan substr dan indexing 
	// yang ditemukan oleh find
	cout << kata.substr(20, 5) << endl;
	// mencari member dari urutan paling belakang
	cout << kata.rfind('a') << endl;
	cout << kata.substr(21, 1) << endl;

	return 0;
}