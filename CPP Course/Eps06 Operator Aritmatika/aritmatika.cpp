#include <iostream>
using namespace std;

int main(){
    int a = 6;
    int b = 4;

    /* deklarasi */
    int hasil;

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus (Sisa bagi)
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;
    
    return 0;
}