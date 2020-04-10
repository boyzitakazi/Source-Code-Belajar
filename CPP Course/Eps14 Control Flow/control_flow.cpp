#include <iostream>
using namespace std;

int main()
{
	// for (int a = 1; a <= 10; a++){
	//	cout << "Layanan " << a << endl;
	//	if (a == 5){
			// flow control
	//		break;
	// 	}
	// }

	int a = 0;
	while (a <= 10){
		a++;
		if (a == 5){
			continue;
		}
		cout << a << endl;
	}
	cout << "Program luar" << endl;

	/* code */
	return 0;
}