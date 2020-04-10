#include <iostream>
using namespace std;

void binary(int desimal){
	int sisa;
    int hasil;
     
    if ( desimal <= 1)
    {
    	cout << desimal;
        return;
    }
    sisa = desimal % 2;
    hasil = desimal / 2;
    binary(hasil);
    cout << sisa;
}

int main(int argc, char const *argv[]){

	int bil_des, hasil_bag, hasil_bin;
	cout << "Masukan bilangan desimal : ";
	cin >> bil_des;

	//hasil = bil_des % 2;
	//cout << "Hasil = " << hasil << endl;
	//bagiruntun(bil_des % 2);
	binary(bil_des);
	
	cout << endl;
		
	return 0;
}