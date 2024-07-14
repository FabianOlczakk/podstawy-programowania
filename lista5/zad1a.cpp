#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cout << "Podaj ciag znakow: ";
    cin >> n;

    for (char i : n) {
        if (i != toupper(i)) {
            cout << "\nNapis nie sklada sie z wielkich liter.";
            return 1;
        }
    }
    cout << "\nNapis sklada sie z wielkich liter.";

    return 1;
}