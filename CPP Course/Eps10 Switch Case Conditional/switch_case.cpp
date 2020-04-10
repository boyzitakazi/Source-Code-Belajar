#include <iostream>

using namespace std;

int main(){
	// percabangan selain if else
	// struktur switch case
	/*
		switch(statement){
			case statement:
		}
	*/

	// dan penggunaan switch case juga akan support hanya int dan char

	int a;

	cout << "Masukan Angka Rahasia : ";
	cin >> a;
	
	switch(a){
		case 5:
			cout << "Anda Mendapatkan Hadiah.!" << endl;
			break;
		default:
			cout << "Anda Belum Beruntung.!" << endl;
	}


	/* code */
	return 0;
}