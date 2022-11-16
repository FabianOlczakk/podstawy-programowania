#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int size;
	cout << "Ile elementow chcesz wczytac?: ";
	cin >> size;
	
	float A[size];
	
	for (int i = 0; i < size; i++) {
		cout << "\nWprowadz liczbe " << i+1 << ": ";
		cin >> A[i];	
	}
	
	float B[size];
	
	for (int i = 0; i < size; i++) {
		B[i] = rand() % 101;
		cout << "\nB[" << i+1 << "]:\t" << B[i];
	}
	
	float C[size];
	
	for (int i = 0; i < size; i++) {
		C[i] = A[i] * B[i];
		cout << "\nC[" << i+1 << "]:\t" << C[i];
	}
	
	return 1;
}