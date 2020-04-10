#include <iostream>
#include <array>
using namespace std;

const int baris = 2;
const int kolom = 3;

void printArray(array < array < int, kolom>, baris > loopArr){
	for (array < int, kolom> vectorBaris : loopArr){
		cout << "[ ";
		for (int vectorKolom : vectorBaris){
			cout << vectorKolom << " ";
		}
		cout << "]" << endl;
	}
}

int main(){
	array < array < int, kolom >, baris > arrayMD = {1,2,3,4,5,6};
	array < int, 4 > arrayLOOP = {0,1,2,3};
	int arrayMOD[10];

	for (int i = 0; i < baris; ++i){
		cout << "[ ";
		for (int j = 0; j < kolom; ++j){
			cout << arrayMD[i][j] << " ";
		}
		cout << "]" << endl;
	}

	cout << endl;
	// looping array 2 array menggunakan void function

	printArray(arrayMD);

	cout << endl;
	// looping array 1 dimentions

	for (int data : arrayLOOP){
		cout << data << endl;
	}

	cout << endl;
	// looping & modificate array 1 dimentions
	int index = 0;
	int *nilaiARR = arrayMOD;
	for (int i = 0; i < 10; ++i){
		*(nilaiARR + index) = i;
		index += 1;
		cout << nilaiARR[i] << endl;
	}

	return 0;
}