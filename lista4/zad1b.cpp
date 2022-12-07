#include <iostream>
using namespace std;

int main() {
    int random = 5 + (rand() % 30);
    int array [random];

    cout << "Tablica:\n";
    for (int i = 0; i < random; i++) {
        array[i] = rand() % 1000;
        cout << array[i] << "; ";
    }
    cout << "\nWybierz element z podanej listy: ";
    int elm;
    cin >> elm;

    bool err = true;
    cout << "Element znajudje sie na pozycji/pozycjach:\n";
    for (int i = 0; i < random; i++) {
        if (elm == array[i]) {
            cout << "Pozycja:\t" << i+1 << "\ttablica[" << i << "]\n";
            err = false;
        }
    }

    if (err) {cout << "\nBrak podanego elementu w tablicy.";}

    return 1;
}