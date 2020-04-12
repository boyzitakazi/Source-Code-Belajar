#include <iostream>
#include <string>
using namespace std;

// tenary operator = ?
// ini ekuivalen dengan if else
// (kondisi) ? hasil1 : hasil2
// jika kondisi benar maka tampilkan hasil1 dan sebaliknya


int main(){
	// contoh penggunaan
	int a,b;
	string hasil1, hasil2, output;

	hasil1 = "BENAR";
	hasil2 = "SALAH";

	a = 5;
	printf("%s", "Masukan angka : ");
	scanf("%d", &b);

	// jika menggunakan if else
	/*
	if (a < b){
		cout << hasil1 << endl;
	} else {
		cout << hasil2 << endl;
	}
	*/

	// perbedaan menggunakan operator tenary
	// lebih flexibel
	output = (a < b) ? hasil1 : hasil2;
	cout << output << endl;


	return 0;
}