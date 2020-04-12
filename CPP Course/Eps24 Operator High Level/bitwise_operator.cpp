#include <iostream>
#include <bitset>
#include <string>
using namespace std;

// &  - OPerator AND selain true dan true nilainya false
// |  - OPerator OR selain false dan false nilainya true
// ~  - OPerator NOT menjadikan true jadi false dan sebaliknya
// ^  - OPerator XOR (exclusive Or) mengambil nilai true kecuali keduanya true
// << - OPerator SHIFT LEFT pergeseran ke-kiri
// >> - OPerator SHIFT RIGHT pergeseran ke-kanan

// function print out value
void printValue(unsigned short);


// function print Binary
void printBinary(char);

int main(){
	// panggil function
	printBinary('&');

	cout << endl;
	printBinary('|');

	cout << endl;
	printBinary('~');

	cout << endl;
	printBinary('^');

	cout << endl;
	printBinary('<');

	cout << endl;
	printBinary('>');

	cout << endl;



	return 0;
}


// protoryping function
void printValue(unsigned short short_val){
	cout << bitset<8>(short_val) << " = " << short_val << endl;
}


// protoryping function
void printBinary(char char_value){
	// deklarasi
	unsigned short a, b, c, out;
	a = 9;
	b = 10;

	// kondisi
	if (char_value == '&'){
		c = a & b;
		printf("\n%s\n", "& - OPERATOR AND");
		printValue(a);
		printValue(b);
		printValue(c);

	} else if (char_value == '|'){
		c = a | b;
		printf("%s\n", "| - OPERATOR OR");
		printValue(a);
		printValue(b);
		printValue(c);

	} else if (char_value == '~'){
		printf("%s\n", "~ - OPERATOR NOT");
		c = (~ a);
		printValue(a);
		printValue(c);

	} else if (char_value == '^'){
		printf("%s\n", "^ - OPERATOR XOR");
		c = a ^ b;
		printValue(a);
		printValue(b);
		printValue(c);
	
	} else if (char_value == '<'){
		printf("%s\n", "<< - OPERATOR SHIFT LEFT");
		printValue(a); // sebelum
		c = a << 2; // geser kekiri 2 bar
		printValue(c); // sesudah
	
	} else if (char_value == '>'){
		printf("%s\n", ">> - OPERATOR SHIFT RIGHT");
		printValue(a); // sebelum
		c = a >> 3; // geser ke-kanan 3 bar
		printValue(c); // sesudah
	}
}