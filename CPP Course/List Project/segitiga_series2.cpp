#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Masukan nilai n : ";
	cin >> n;

	cout << "Pola 1 \n";
	
	for(int i = 0; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}

		for(int j = 1; j <= ( 2*i-1 ); j++){
			cout << "+";
		}

		cout << endl;
	}

	cout << "\nPola 2 \n";

	for(int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << " ";
			/* code */
		}

		for (int j = n; j >= (2*i - n); j--){
			cout << "+";
		}

		cout << endl;
	}

	/* code */
	return 0;
}