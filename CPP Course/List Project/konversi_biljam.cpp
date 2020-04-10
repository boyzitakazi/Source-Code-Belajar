#include <iostream>
using namespace std;

int konversi(){
	// inisialisasi jam dan menit
	int jam   = 3600;
	int menit = 60;

	// deklarasi
	int hasil, inp_jam, inp_menit, inp_detik;
	while(true){
		// nama program
		cout << "======================================" << endl;
		cout << "| Program konversi bilangan ke detik |" << endl;
		cout << "======================================" << endl;
		
		// input nilai jam
		cout << "Masukan nilai jam : ";
		cin >> inp_jam;
		// cek kondisi
		if (inp_jam > 12){
			break;
		} 

		// input nilai menit		
		cout << "Masukan nilai menit : ";
		cin >> inp_menit;
		// cek kondisi
		if (inp_menit > 60){
			break;
		}

		// input nilai detik		
		cout << "Masukan nilai detik : ";
		cin >> inp_detik;
		// cek kondisi
		if (inp_detik > 60){
			break;
		}

		// hitung hasil
		hasil = (inp_jam * jam) + (inp_menit * menit) + inp_detik;

		// tampilkan ke screen
		cout << "Hasil dari " << inp_jam << " jam " << inp_menit << " menit " << inp_detik << " detik ke detik adalah " << hasil << " detik" << endl;

		cout << endl;
		// return hasil / nilai kembalian
		return hasil;
	}
}

int main(int argc, char const *argv[]){
	// panggil fungsi/method
	konversi();

	/* code */
	return 0;
}