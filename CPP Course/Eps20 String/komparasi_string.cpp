#include <iostream>
#include <string>
using namespace std;

// string dapat membandingkan lebih dari satu karakter
// kekurangan string hanya ada ketika menginput sebuah kalimat
// tapi char dia hanya bisa membandingkan 1 karakter
// dan tidak dapat membandingkan dengan huruf

int main(){
	string nama("Nurcholis"); // deklarasi string
	string input; // input string

	// loop conditions
	while(true){
		cout << "Siapakah nama saya : ";
		cin >> input;

		// perbandingan string / komparasi
		if (input == "Nurcholis"){
			cout << "you are my honey" << endl;
			break;
		}

		cout << "Maaf siapa itu " << input << endl;
	}

	cout << "program selesai" << endl;
	
	return 0;
}