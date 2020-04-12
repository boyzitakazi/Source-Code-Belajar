#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ifstream   = input file stream
// ofstream   = output file stream
// ios::out   = default, menampilkan output
// ios::app   = menambahkan data
// ios::trunc = default, menambahkan data jika ada maka dioverwrite/timpa


int main(){
	ofstream myFile;
	string inp_name;
	
	cout << "Nama Lengkap : ";
	getline(cin, inp_name);

	// menggunakan ios::out | default
	myFile.open("data1.txt", ios::out);
	myFile << "\nDATA KEDUA DITAMBAHKAN";
	myFile.close();

	// menggunakan ios::trunc | default
	myFile.open("data2.txt", ios::trunc);
	myFile << "\nDATA KEDUA DITAMBAHKAN";
	myFile.close();

	// menggunakan ios::app | append menambahkan data
	myFile.open("data3.txt", ios::app);
	myFile << "\nNama Lengkap : " << inp_name;
	myFile.close();

	return 0;
}