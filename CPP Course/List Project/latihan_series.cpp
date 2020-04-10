#include <iostream>
#include <array>
using namespace std;

int main(){
	cout << "Input Nilai Siswa\n\n";
	
	// nilai array 11 untuk batas akhir
    array < int, 11 >nilai;

    // looping array
    for (int i = 0; i < nilai.size(); i++){
        cout << "Jumlah siswa bernilai ";
    if (i == 0){
        cout << " 0-9 : ";
    } else if (i == 10){
        cout << " 100 : ";
    } else {
        cout << (i*10) << "-" << (i*10)+9 << ": " ;
    }
        cin >> nilai[i];
    }

	return 0;
}