#include <iostream>
#include <string>
using namespace std;

int main() {
    string inp;
    cout << "Wprowadz ciag znakow: ";
    cin >> inp;
    char characters [inp.size()];

    for (int i = 0; i < inp.size(); i++) {
        characters[i] = inp[i];
    }

    sort(characters, characters + inp.size());

    int counter = 0;
    char prev = characters[0];
    for (int i = 0; i < inp.size(); i++) {
        if (characters[i] != prev) {
            cout << "\n'" << prev << "'\t" << counter;
            counter = 0;
            prev = characters[i];
        }
        counter++;

        if (i == inp.size()-1) {
            cout << "\n'" << characters[i] << "'\t" << counter;
        }
    }

    return 1;
}