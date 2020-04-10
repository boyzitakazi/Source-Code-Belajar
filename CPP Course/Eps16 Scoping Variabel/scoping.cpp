#include <iostream>
using namespace std;

// scope global
int x = 10; // variabel global

int variabel(){
	int x = 20;
	return x;
}

int main(){
	cout << "variabel global = " << x << endl;

	int x = 1; // variabel local
	cout << "variabel local = " << x << endl;

	// block scope
	// {} namanya bracket
	// :: namanya unery
	{
		int x = 9; // block scope variabel
		cout << "variabel block scope = " << x << endl;

	}

	cout << "variabel global scope local = " << variabel() << endl;
	cout << "mengambil variabel x yang paling jauh = " << ::x << endl;



	/* code */
	return 0;
}