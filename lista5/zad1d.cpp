#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	
	cout << "Podaj ciag znakow: ";
	getline(cin, n);
	
	for (int i = 0; i < n.length(); i++) {n[i] = tolower(n[i]);}

	for (int i = 0; i < n.length(); i++) {
		if (n[i] == ' ') {
			n[i+1] = toupper(n[i+1]);
		}
	}
	n[0] = toupper(n[0]);
	
	cout << n;
	
	return 1;
}