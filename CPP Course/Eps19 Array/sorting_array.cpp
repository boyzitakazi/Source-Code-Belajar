#include <iostream>
#include <array>
#include <algorithm> // mengambil function sort
using namespace std;

// menggunakan const (nilai tetap)
const size_t panjang = 10;

// prototype function for print array & overloading
void printArray(array <int, panjang>);
void printArray(array <char, panjang>);


int main(){
	// deklarasi array
	array <int, panjang> intARR = {9,8,2,5,7,6,3,0,1,4};
	array <char, panjang> charARR = {'c','e','g','f','l','k','d','a','b','h'};

	// menampilkan array dengan looping
	for (int LoopARR : intARR){
		cout << LoopARR << " ";
	}

	cout << endl << endl;
	// melakukan sorting (mengurutkan nilai array dari terkecil)
	sort(intARR.begin(), intARR.end());
	printArray(intARR);

	cout << endl << endl;
	// melakukan sorting (mengurutkan char array)
	sort(charARR.begin(), charARR.end());
	printArray(charARR);

	cout << endl << endl;
	// melakukan sorting (mengurutkan char array)
	sort(intARR.end(), intARR.begin(), gather());
	printArray(intARR);

	cout << endl;
	return 0;
}

// deklarasi
void printArray(array <int, panjang> akhirArr){
	for (int LoopARR : akhirArr){
		cout << LoopARR << " ";
	}	
}

void printArray(array <char, panjang> akhirArr){
	for (char LoopARR : akhirArr){
		cout << LoopARR << " ";
	}	
}
