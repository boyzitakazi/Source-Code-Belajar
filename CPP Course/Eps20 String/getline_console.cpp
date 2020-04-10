#include <iostream>
#include <string>
using namespace std;


int main(){
	// deklarasi string
	string input_kalimat;
	// menggunakan getline method-nya cin/input dari console
	// kemudian variabel
	getline(cin, input_kalimat);

	// program untuk menampilkan jumlah kalimat yang ada
	// deklarasi
	int posisi = 0;
	int jumlah = 0;

	// gunakan while kondisi
	while(true){
		posisi = input_kalimat.find(" ", posisi+1);
		jumlah++;
		
		// kondisi jika posisi kurang dari nol
		if (posisi < 0){
			break;
		}
	}

	cout << "Jumlah Kalimat : " << jumlah << endl;
	return 0;
}