#include <iostream>
using namespace std;

int an(int a, int n) {
	
	if (n < 0) return 1;
	else {
		return a * an(a, n-1);
	}
}

int main() {
	
	int a;
	cout << "Podaj a: ";
	cin >> a;
	
	int n;
	cout << "Podaj n: ";
	cin >> n;
	
	cout << "\n" << a << "^" << n << " = " << an(a, n);
	
	return 1;
}

