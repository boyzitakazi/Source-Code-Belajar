#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t baris = 4;
const size_t kolom = 3;


int main(){
    array <array <int, kolom>, baris> nilaiARR= {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 0; i < baris; ++i){
        cout << "[ ";
        for (int j = 0; j < kolom; ++j){
            cout << nilaiARR[i][j] << ' ';
        }
        cout << "]" << endl;
    }

    cout << endl << "Multidimensi Array Basic : " << endl;
    array <int, 10> basicARR = {1,2,3,4,5,6,7,8,9,0};
    int mobil[10] = {1,2,3,4,5,6,7,8,9,0};
    
    sort(basicARR.begin(), basicARR.end());
    for (int nilai : basicARR){
        cout << nilai << endl;
    }

    cout << endl;

    for (int &i : basicARR){
        cout << &i << ' ' << i << ' ' << endl;
    }

    cout << endl;

    int *j = mobil;
    cout << j << ' ' << *j << ' ' << endl;

    return 0;
}