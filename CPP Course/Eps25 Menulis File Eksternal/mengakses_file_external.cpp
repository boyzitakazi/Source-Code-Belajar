#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// mengakses data eksternal ifstream  | >>
// membuat data ke eksternal ofstream | <<
// mengenal eof (external output file)


int main(){
	// deklarasi
	ifstream myFile;
	string access_member;
	string name;

	myFile.open("data.txt");
	while(!false){
		getline(myFile, access_member);
		if (access_member == "data siswa"){
			break;
		}
	}

	while(!myFile.eof()){
		getline(myFile, access_member);
		cout << access_member << endl;
	}
	myFile.close();


	return 0;
}