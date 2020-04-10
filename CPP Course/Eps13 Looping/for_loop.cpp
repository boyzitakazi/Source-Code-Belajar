#include <iostream>

using namespace std;

int main()
{

	// for loop
	// struktur for looping

	// bentuk ke 1

	// for(inisialisasi; kondisi; increment){
	//		statement;
	// }

	// bentuk ke 2

	// for(inisialisasi; kondisi; compound/gabungan){
	//		statement;
	// }

	cout << "LOOP 1" << endl;
	for (int a = 1; a <= 10; a++){
		cout << a << " alhamdulillah.!" << endl;
	}

	cout << endl << "LOOP 2" << endl;
	for (int a = 1; a <= 10; a+=1){
		cout << a << " alhamdulillah.!" << endl;
	}

	cout << endl << "LOOP 3" << endl;
	int total = 0;
	for (int a = 1; a <= 10; ++total, a++)// compound atau gabungan
	{
		cout << a << " || " << total << endl;
	} 

	/* code */
	return 0;
}