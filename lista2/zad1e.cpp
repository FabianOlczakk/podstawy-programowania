#include <iostream>
using namespace std;

int main() {

    int n;
    float sum = 0;

    cout << "Podaj n: ";
    cin >> n;

    for (int k = 1; k <= n; k++) {
        sum += 1.0 / (3.0 * (float)k + 1.0);
    }

    cout << "\nSuma szeregu: " << sum;

    return 1;
}