#include <iostream>
using namespace std;

int main () {
	
	int D[10][2];
	int a1 = 0;
	int a2 = 1;
	int s = 1;
	
	cout << "n\t" << "SIL\t" << "FIB\n"; 
	
	for (int i = 0; i < 10; i++) {
		D[i][0] = (i+1) * s;
		s *= i+1;
		
		if (i) {
			D[i][1] = a1 + a2;
			a2 = a1 + a2;
			a1 = a2 - a1;
		} else D[i][1] = 1;
		
		
		cout << i+1 << "\t" << D[i][0] << "\t" << D[i][1] << "\n";
	}	
	
	return 1;
}
