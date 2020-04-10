#include <iostream>

using namespace std;

int main(){
	int a = 3;
	int b = 2;

	// deklarasi
	bool hasil;

	// not :: !
	hasil = !(a == 3);
	cout << hasil << endl;

	cout << "\n";
	// and :: && jika kedua nilai true maka hasilnya true
	cout << "Operator AND \n";
	hasil = (a == 3) and (b == 2);
	cout << hasil << endl; // true and true
	hasil = (a == 3) and (b == 3);
	cout << hasil << endl; // true and false
	hasil = (a == 2) && (b == 2);
	cout << hasil << endl; // false and true
	hasil = (a == 4) && (b == 4);
	cout << hasil << endl; // false and false

	cout << "\n";
	// or :: || jika kedua nilai false maka hasilnya false
	cout << "Operator OR \n";
	hasil = (a == 3) or (b == 2);
	cout << hasil << endl; // true or true
	hasil = (a == 3) or (b == 3);
	cout << hasil << endl; // true or false
	hasil = (a == 2) || (b == 2);
	cout << hasil << endl; // false or true
	hasil = (a == 4) || (b == 4);
	cout << hasil << endl; // false or false

	cout << "\n";
	hasil = !((a == 4) and (b == 4));
	cout << hasil << endl;

	cin.get();
	return 0;
}