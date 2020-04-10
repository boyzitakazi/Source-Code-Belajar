#include <iostream>
using namespace std;

int main(){
	int nilaiA;
	cout << "Masukan nilai untuk mengetahui genap/ganjil : ";
	cin >> nilaiA;

	for (int i = nilaiA; i >= -1; i-=2){
		cout << i << endl;

		if ((i == 0) && (i != -1)){
			cout << "GENAP" << endl;
		} else if (i == -1){
			cout << "GANJIL" << endl;
		}
	}

	return 0;
}