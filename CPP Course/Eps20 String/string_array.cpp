#include <iostream>
#include <array>
#include <string>
using namespace std;

// variabel konstanta
const size_t len_contact = 5;

// prototyping function
void tampilkan(array <string, len_contact>);

int main(){
	// deklarasi string
	array <string, len_contact> contact_name = {
		"Nur",
		"Majid",
		"Cholis",
		"Tenan",
		"Ganteng",
	};
	
	// panggil fungsi
	tampilkan(contact_name);
	return 0;
}

// inisialization
void tampilkan(array <string, len_contact> contact){
	// menggunakan reference supaya tidak memakan banyak alamat memori
	for(string &name : contact){
		cout << &name << " " << name << endl;
	}

	cout << contact[0];
	cout << contact[2] << " ";
	cout << contact[1] << " ";
	cout << contact[4] << " ";
	cout << contact[3] << endl;
}
