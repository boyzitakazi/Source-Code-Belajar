#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string inp_a, inp_b; 
  string jlm_str;

  // input string
  cin >> inp_a;
  cin >> inp_b;

  // menentunkan panjang string
  cout << inp_a.length() << " " << inp_b.length() << endl;

  // jumlah str 1 & 2
  jlm_str = inp_a + inp_b;
  cout << jlm_str << endl;

  // indexing
  char a0 = inp_a[0];
  char b0 = inp_b[0];

  inp_a[0] = b0;
  inp_b[0] = a0;

  cout << inp_a << " " << inp_b << endl;

  return 0;
}