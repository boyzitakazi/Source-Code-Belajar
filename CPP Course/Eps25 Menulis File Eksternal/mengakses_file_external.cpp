#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// mengakses data eksternal ifstream  | >>
// membuat data ke eksternal ofstream | <<
// mengenal eof (external output file) | untuk menampilkan semua data


int main(){
	// deklarasi
	ifstream myFile;
	string access_member;
	string name;
	
	// buka file, jika belum ada tambahkan menggunakan ios::trunc
	myFile.open("data.txt");
	// looping file
	while(!false){
		getline(myFile, access_member);
		// jika menemukan data siswa maka akan berenti
		if (access_member == "data siswa"){
			break;
		}
	}

	// looping data menggunakan eof yang dimana eof ini akan mengambil semua data
	// yang ada di file data.txt
	while(!myFile.eof()){
		// menggunakan metode string yaitu getline
		getline(myFile, access_member);
		cout << access_member << endl;
	}
	myFile.close();


	return 0;
}
