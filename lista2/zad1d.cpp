#include <iostream>
#include <list>
using namespace std;

int main() {

    list<float> numbers;
    int n;

    for (int i = 1; i < 11; i++) {
        cout << "Podaj liczbe " << i << ": ";
        cin >> n;
        numbers.push_back(n);
    }

    int sum = 0;
    int max = numbers.front();
    int min = numbers.front();
    for (int i : numbers) {
        cout << i << "\n";
        sum += i;

        if (i > max) max = i;
        if (i < min) min = i;
    }

    cout << "Srednia: " << (float)sum / 10 << "\n";
    cout << "Suma: " << sum << "\n";
    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";

    return 1;
}