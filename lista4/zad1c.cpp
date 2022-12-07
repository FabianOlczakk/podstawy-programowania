#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Podaj ilosc elementow w tablicy: ";
    cin >> N;

    double array [N];

    for (int i = 0; i < N; i++) {
        cout << "Podaj " << i+1 << " element tablicy: ";
        cin >> array[i];
    }

    cout << "\nTablica przed sortowaniem:\n";
    for (int i = 0; i < N; i++) {
        cout << array[i] << ", ";
    }

    for (int l = 0; l < N; l++) {
        for (int i = 0; i < N-1; i++) {
            if (array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
            }
        }
    }

    cout << "\nTablica po sortowaniu:\n";
    for (int i = 0; i < N; i++) {
        cout << array[i] << ", ";
    }

    return 1;
}