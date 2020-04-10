#include <iostream>
using namespace std;

int main()
{
	int n;
	char segitiga;

	cout << "Masukan nilai : ";
	cin >> n;

	cout << "Pola 1\n";
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < i; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPola 2\n";
	for(int i = 0; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPola 3\n";
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < i; j++){
			cout << " ";
		}

		for(int j = n; j > i; j--){
			cout << "*";
		}

		cout << endl;
	}

	cout << "\nPola 3\n";
	for (int i = 0; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}

		for(int j = 0; j < i; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	/* code */
	return 0;
}