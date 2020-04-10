#include <iostream>
#include <cstdlib> // di dalamnya ada fungsi random (built-in)

using namespace std;

int main(){

	char next;

	while (true){
		cout << "Apakah ingin melempar dadu.? [y/n] : ";
		cin >> next;

		if (next == 'y'){
			cout << 1 + (rand() % 6) << endl;
		} else if (next == 'n'){
			break;
		} else {
			cout << "Masukan y/n abang.!!" << endl;
		}
	}

	/* code */
	return 0;
}