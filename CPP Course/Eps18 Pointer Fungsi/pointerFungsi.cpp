#include <iostream>
using namespace std;

// mengenal referen dan pointer lebih dalam
// menggunakan pointer pada fungsi
// menggunakan void karena nilai auto dikembalikan
void pangkat(int *valPtr){
	*valPtr = *valPtr * *valPtr; // dereferencing mengambil sebuah nilai dari pointer
}


int main(){
	printf("%s\n", "_____________________________________");
	printf("%s\n", "| Slot 1 | Slot 2 | Slot 3 | Slot 4 |");
	printf("%s\n\n", "-------------------------------------");
	
	// deklarasi
	int a = 10;
	cout << "NILAI DARI VARIABEL  a : " << a << endl;
	cout << "ALAMAT DARI VARIABEL a : " << &a << endl;

	// referencing (&) mengacu pada suatu variabel sehingga nilai dan alamatnya sama
	int &b = a;
	cout << "NILAI DARI VARIABEL  b : " << b << endl;
	cout << "ALAMAT DARI VARIABEL b : " << &b << endl;

	// pointer memberi alamat pada sebuah variabel
	// pointer memiliki alamat sendiri
	// sehingga nilai nya sama tapi alamatnya berbeda
	// memanggil nilai pada pointer menggunakan dereference(*)
	int *c = &b; 
	cout << "NILAI DARI VARIABEL  c : " << *c << endl;
	cout << "ALAMAT DARI VARIABEL c : " << &c << endl;

	// memanggil fungsi pointer
	pangkat(&a);
	cout << "NILAI DARI VARIABEL  a : " << a << endl;
	cout << "ALAMAT DARI VARIABEL a : " << &a << endl;

	/* code */
	return 0;
}