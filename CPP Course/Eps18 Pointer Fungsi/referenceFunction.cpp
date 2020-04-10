#include <iostream>
using namespace std;

// menggunakan reference pada fungsi
// supaya ditempatkan pada alamat memori yang sama
void pangkat(int &b){
	cout << "Alamat dari a : " << &b << endl;
	cout << "nilai dari  a : " << b << endl;	
	b = b * b;
}

int main(){
	int a = 10;

	cout << "Alamat dari a : " << &a << endl;
	cout << "nilai dari  a : " << a << endl;

	// mengambila fungsi
	pangkat(a);

	cout << "nilai dari  a : " << a << endl;
	
	/* code */
	return 0;
}