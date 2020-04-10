#include <iostream>
using namespace std;


// pointer merupakan sebuah memory address
// untuk memasukan variabel dan berfungsi untuk memanage sebuah memori

int main(){
	int a = 10;
	int *aPtr = nullptr; // deklarasi pointer
	aPtr = &a;

	// menampilkan nilai dari variabel
	cout << "Nilai dari variabel : " << a << endl;
	
	// menampilkan alamat memori (memori address)
	cout << "Alamat Memori Variabel: " << &a << endl;
	
	// menampilkan alamat memori pointer
	cout << "Alamat Memori Pointer: " << aPtr << endl;
	
	// menampilkan nilai pointer
	// namanya Dereference mengambil nilai pada pointer (alamat memori)
	cout << "Nilai dari pointer : " << *aPtr << endl;

	/* code */
	return 0;
}