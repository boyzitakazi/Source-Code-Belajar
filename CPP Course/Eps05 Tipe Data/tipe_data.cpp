#include <iostream>
#include <limits>
using namespace std;

int main(){
    //Perbedaan
    //Jenis-Jenis Bilangan Bulat
    short a = 10; // 16 bit
    int b = 20; // 32 bit
    long c = 30; // 64 bit

    // charachter
    char d;

    // Bilangan Decimal
    float e = 1.0;
    double f = 2.0;

    // Boolean
    bool g = true;

    cout << "Bilangan Bulat : \n";
    cout << sizeof(a) << " Byte " << "Ini adalah Short \n";
    cout << sizeof(b) << " Byte " << "Ini adalah Integer \n";
    cout << sizeof(c) << " Byte " << "Ini adalah Long \n";
    cout << "\n";
    cout << "Charachter : \n";
    cout << sizeof(d) << " Byte " << "Ini adalah Charachter \n";
    cout << "\n";
    cout << "Bilangan Decimal : \n";
    cout << sizeof(e) << " Byte " << "Ini adalah float \n";
    cout << sizeof(f) << " Byte " << "Ini adalah double \n";
    cout << "\n";
    cout << "Boolean : \n";
    cout << sizeof(g) << " Byte " << "Ini adalah boolean \n";

    cout << "\n";
    // deklarasikan
    // perbedaan menggunakan unsigned (tanpa plus min)
    cout << a << " Ini adalah Tipe data short bernilai 16 bit" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;
    cout << b << " Ini adalah tipe data integer bernilai 32 bit" << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
    cout << c << " Ini adalah tipe data long bernilai 64 bit" << endl;
    cout << numeric_limits<unsigned long>::max() << endl;
    cout << numeric_limits<unsigned long>::min() << endl;
    cin.get();
    return 0;
}