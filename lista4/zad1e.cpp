#include <iostream>
using namespace std;

void quickSort(int array[], int start, int end) {
    if (start >= end) {return;}

    int firstElement = array[start];
    int counter = 0;
    for (int i = start + 1; i <= end; i++) {
        if (array[i] <= firstElement)
            counter++;
    }

    int pindex = start + counter;
    swap(array[pindex], array[start]);

    int i = start, j = end;
    while (i < pindex && j > pindex) {

        while (array[i] <= firstElement) {
            i++;
        }

        while (array[j] > firstElement) {
            j--;
        }

        if (i < pindex && j > pindex) {
            swap(array[i++], array[j--]);
        }
    }

    quickSort(array, start, pindex - 1);
    quickSort(array, pindex + 1, end);
}

int main() {
    int random = 5 + (rand() % 30);
    int array [random];

    cout << "Tablica przed sortowaniem:\n";
    for (int i = 0; i < random; i++) {
        array[i] = rand() % 1000;
        cout << array[i] << "; ";
    }

    quickSort(array, 0, random - 1);

    cout << "\nTablica po sortowaniu:\n";
    for (int i = 0; i < random; i++) {
        cout << array[i] << ", ";
    }

    return 1;
}
