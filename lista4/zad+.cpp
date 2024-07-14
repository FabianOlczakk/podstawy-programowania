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


    return 1;
}