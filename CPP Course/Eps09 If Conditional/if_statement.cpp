#include <iostream>

using namespace std;

int main(){
	// deklarasi
	int a;
	cout << "masukan angka rahasia : ";
	cin >> a;
	// if statement
	// menggunakan boolean
	
	/*
	Struktur If Statement
	if (kondisi){
		statement;
	}
	*/
	
	if (a == 10){
		cout << "Top Secret Opened 10" << endl;
	}
	else if (a == 20){
		cout << "Top Secret Opened 20" << endl;
	}
	else{
		cout << "Tidak ada" << endl;
	}

	// ENTER
	cout << "\n";

	// Input nilai
	int nilai1,nilai2;

	cout << "Berapakah hasil perkalian 10 X 30 : ";
	cin >> nilai1;
	if (nilai1 == 300){
		cout << "Jawaban yang anda masukan benar" << endl;
	} else {
		cout << "Jawaban anda salah" << endl;
	}

	cout << "Berapakah hasil penjumlahan dari 10 + 30 : ";
	cin >> nilai2;
	if (nilai2 == 40){
		cout << "Jawaban yang anda masukan benar" << endl;
	} else {
		cout << "Jawaban anda salah" << endl;
	}

	if (nilai1 == 300 && nilai2 == 40){
		cout << "Semua Jawaban benar" << endl;
	} else if (nilai1 == 300){
		cout << "anda menjawab 1 soal benar" << endl;
	} else if (nilai2 == 40){
		cout << "anda menjawab 1 soal benar" << endl;
	}

	cin.get();
	return 0;
}