#include <iostream>
using namespace std;

void bubbleSort(double array[], int N, bool type) {
    if (N == 1) {return;}

    int counter = 0;
    for (int i = 0; i < N-1; i++) {
        if (type) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                counter++;
            }
        }
        else {
            if (array[i] < array[i + 1]) {
                swap(array[i], array[i + 1]);
                counter++;
            }
        }
    }

    if (counter==0) {return;}
    bubbleSort(array, N-1, type);
}

int main() {
    int N;
    cout << "Podaj ilosc elementow w tablicy: ";
    cin >> N;

    double array [N];

    for (int i = 0; i < N; i++) {
        cout << "Podaj " << i+1 << " element tablicy: ";
        cin >> array[i];
    }

    cout << "Wybierz typ sortowania tablicy:\n" << "0 - malejace\n" << "1 - rosnace\n";
    int type;
    cin >> type;

    cout << "\nTablica przed sortowaniem:\n";
    for (int i = 0; i < N; i++) {
        cout << array[i] << ", ";
    }

    if (type) {bubbleSort(array, N, true);}
    else { bubbleSort(array, N, false);}

    cout << "\nTablica po sortowaniu:\n";
    for (int i = 0; i < N; i++) {
        cout << array[i] << ", ";
    }

    return 1;
}