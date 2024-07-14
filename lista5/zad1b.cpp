#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	
	cout << "Podaj ciag znakow: ";
	getline(cin, n);
	
	string s;
	int c[n.length()];
    bool b;
    int index = 0;

	for (int i = 0; i < n.length(); i++) {
        b = false;
		for (int l = 0; l < n.length(); l++) {
            if (n[i] == s[l]) {
                b = true;
                c[l] ++;
            }
        }

        if (!b) {
            s.push_back(n[i]);
            c[index] = 1;
            index++;
        }
	}

    cout << "\nLista znakow:\n";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << " : " << c[i] << endl;
    }

	return 1;
}