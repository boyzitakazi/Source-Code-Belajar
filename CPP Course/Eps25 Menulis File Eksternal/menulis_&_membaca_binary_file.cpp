#include <iostream>
#include <fstream>
using namespace std;

// mengenal reinterpret_cast<char*>(address dari nilai yang ingin dijadikan binary), sizeof(ukuran nilai tersebut)

int main(){
	fstream myFile;
	int write = 12345;
	int read;

	// menulis binary file
	myFile.open("data.bin", ios::out | ios::binary);
	myFile.write(reinterpret_cast<char*>(&write), sizeof(write));
	myFile.close();

	// membaca binary file
	myFile.open("data.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&read), sizeof(read));
	cout << read << endl;
	myFile.close();

	return 0;
}