#include <iostream>
using namespace std;

/* syarat overloading nama fungsi harus sama, dan 
menurut saya ini seperti menentukan sebuah kondisi
jika si A terpenuhi jalankan A dan sebaliknya */

// prototyping
// overloading atau menimpa
int menghitung_kotak(int p, int l);
int menghitung_kotak(int s);
void tampilkan_nilai(int p, int l);
void tampilkan_nilai(int s);


int main(){
	// deklarasi
	int panjang, lebar;
	printf("%s", "Masukan nilai panjang : ");
	scanf("%d", &panjang); // input
	printf("%s", "Masukan nilai lebar : ");
	scanf("%d", &lebar); // input                                                                                          

	// call the fungction
	tampilkan_nilai(panjang,lebar);
	tampilkan_nilai(panjang);

	return 0;
}


// overloading(menimpa) function dengan 2 argument | syarat nama function harus sama
int menghitung_kotak(int p, int l){
	return p*l;
}

// overloading(menimpa) function dengan 1 argument | syarat nama function harus sama
int menghitung_kotak(int s){
	return s*s;
}

// overloading(menimpa) function dengan 2 argument | syarat nama function harus sama
void tampilkan_nilai(int p, int l){
	int hasil = menghitung_kotak(p,l);
	printf("%d\n", hasil);
}

// overloading(menimpa) function dengan 1 argument | syarat nama function harus sama
void tampilkan_nilai(int s){
	int hasil = menghitung_kotak(s);
	printf("%d\n", hasil);
}