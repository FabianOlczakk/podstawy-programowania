#include <iostream>
using namespace std;

int main() {
	int t = 2;
	int a = 1;
	int o = 1;
	char i;

	while (t>0 || a>0 || o>0) {
		cin >> i;

		if (i == 't') t--;
		else if (i == 'a') a--;
		else if (i == 'o') o--;
	}

	return 0;
}