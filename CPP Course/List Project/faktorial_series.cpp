#include <iostream>
using namespace std;


int faktorial(int a, int b){
	if (b == 1){
		cout << "selesai" << endl;
	} else {
		return a * faktorial(a, b - 1);
	}
}


int main(){
	int i,b;

	cout << "Masukan angka yang ingin di faktorialkan : ";
	cin >> i;
	cout << "Masukan pangkat : ";
	cin >> b;

	int hasil = faktorial(i,b);
	cout << hasil << endl;

	return 0;
}