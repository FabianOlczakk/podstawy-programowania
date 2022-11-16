#include <iostream>
#include <cstdlib>
using namespace std;

int size = 3;
	float A[10];
	float B[10];
	float C[10];

void tabA() {
	
	for (int i = 0; i < size; i++) {
		cout << "\nWprowadz liczbe " << i+1 << ": ";
		cin >> A[i];	
	}
}

void tabB() {
	for (int i = 0; i < size; i++) {
		B[i] = rand() % 101;
		cout << "\nB[" << i+1 << "]:\t" << B[i];
	}
}

void tabC() {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] * B[i];
		cout << "\nC[" << i+1 << "]:\t" << C[i];
	}
}

void wyswietl(float tabl[]) {
	for (int i = 0; i < size; i++) {
		cout << "\nT[" << i+1 << "]:\t" << tabl[i]; 
	}
}


int main() {
	
	tabA();
	tabB();
	tabC();
	
	wyswietl(B);
	
	return 1;
}
