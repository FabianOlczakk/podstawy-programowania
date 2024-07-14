#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "abcdefghijklmnopqrstuvwxyz";
	string n;
	
	cout << "Podaj ciag znakow do zaszyfrowania: ";
	cin >> n;
	
	for (int i = 0; i < n.length(); i++) {
		for (int l = 0; l < a.length(); l++) {
			if (n[i] == a[l]) {
				if (l == (a.length()-1)) {
					n[i] = a[0];
				}
				else {
					n[i] = a[l+1];
				}
				break;
			}
			else if (n[i] == toupper(a[l])) {
				if (l == (a.length()-1)) {
					n[i] = toupper(a[0]);
				}
				else {
					n[i] = toupper(a[l+1]);
				}
				break;
			}
		}
	}
	
	cout << n;
	
	return 1;
}