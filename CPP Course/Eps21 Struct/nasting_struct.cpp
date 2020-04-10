#include <iostream>
#include <string>
#include <limits>
using namespace std;


// tipe data struct
struct aktor {
	string nama;
	int tahun_lahir;
};


struct film {
	string judul;
	int tahun;
	string genre;
	float rating;
	string aktor;
};


int main(){
	film darurat;
	aktor aktor1;

	aktor1.nama 	   = "Nurcholis Majid";
	aktor1.tahun_lahir = 2002;

	darurat.judul  = "Darurat";
	darurat.tahun  = 2020;
	darurat.genre  = "Action";
	darurat.rating = 9.7;
	darurat.aktor  = aktor1.nama;

	cout << "Judul  : " << darurat.judul << endl;
	cout << "Tahun  : " << darurat.tahun << endl;
	cout << "Genre  : " << darurat.genre << endl;
	cout << "Rating : " << darurat.rating << endl;
	cout << "Rating : " << darurat.aktor << endl;


	return 0;
}