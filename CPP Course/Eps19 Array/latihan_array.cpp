#include <iostream>
#include <array>
using namespace std;

int main(){
    array < int, 11 > nilai;
    cout << "PROGRAM DAFTAR NILAI KULIAH" << endl << endl;

    for (int i = 0; i < nilai.size(); ++i){
        cout << "Mahasiswa dengan nilai ";
        if(i == 0){
            cout << "0-9  : ";
        } else if (i == 10){
            cout << "100  : ";
        } else {
            cout << i*10 << "-" << (i*10) + 9 << " : ";
        }

        cin >> nilai[i];
    }

    for (int i = 0; i < nilai.size(); i++){
        cout << "\nJumlah nilai ";
        if(i == 0){
            cout << "0-9   : ";
        } else if (i == 10){
            cout << "100   : ";
        } else {
            cout << i*10 << "-" << (i*10) + 9 << " : ";
        }

        for (int j = 0; j < nilai[i]; j++){
            cout << "*";
        }

    }
    cout << endl;

    return 0;
}