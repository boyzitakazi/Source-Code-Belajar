#include <iostream>
using namespace std;

int main(){
	int n, fn_1, fn_2, fn;

	cout << "Masukan nilai ke-n : ";
	cin >> n;

	fn_1 = 0;
	fn_2 = 1;

	for (int i = 0; i < n; ++i){
		fn   = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;

		cout << fn << " ";
	}
	
	cout << endl;

	return 0;
}