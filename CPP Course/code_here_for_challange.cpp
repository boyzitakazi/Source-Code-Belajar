#include <iostream>
using namespace std;

int main(){

	for (int i = 0; i <= 24; ++i){
		cout << "*";
	}

	for (int i = 10; i >= 1; i--){
		cout << endl;
		cout << "*";
		for (int j = i; j <= 10; ++j){
			cout << "0";
		}

		cout << "*";
		for (int k = i; k >= 1; --k){
			cout << "@";
		}

		for (int l = i; l > 1; --l){
			cout << "@";
		}

		cout << "*";
		for (int m = i; m < 11; ++m){
			cout << "X";
		}
		cout << "*";
	}
	
	for (int i = 1; i <= 10; ++i){
		cout << endl;
		cout << "*";
		for (int j = i; j <= 10; ++j){
			cout << "0";
		}
		cout << "*";

		for (int j = 1; j <= i; ++j){
			cout << "@";
		}

		for (int j = 1; j < i; ++j){
			cout << "@";
		}
		
		cout << "*";

		for (int j = i; j <= 10; ++j){
			cout << "X";
		}
		cout << "*";
	}

	cout << endl;
	for (int i = 0; i <= 24; ++i){
		cout << "*";
	}

	cout << endl;
	return 0;
}