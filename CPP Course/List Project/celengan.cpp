#include <iostream>
using namespace std;

int main(){
	while(true){
		int nominal;
		char inp_agree;
		 
		cout << "Apakah anda ingin menabung [y/n] : ";
		cin >> inp_agree;

		// kondisi
		if (inp_agree == 'y'){
			cout << "Masukan nominal : Rp.";
			cin >> nominal;

			// kondisi nominal
			if ((nominal < 500) || (nominal > 20000)){
				cout << "nominal yang anda masukan salah.!" << endl << endl;
			} else {
				cout << nominal << endl;
			}
		}
	}

	return 0;
}