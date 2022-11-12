#include <iostream>
using namespace std;


int main() {

    int n;
    cout << "Podaj liczbe wierszy: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int l = 1; l < n - i + 1; l++)
            cout <<"  ";

        int v = 1;
        for(int k = 1; k <= i; k++){
            cout<< v <<"   ";

            v = v * (i - k)/k;
        }
        cout << "\n";
    }

    return 1;
}