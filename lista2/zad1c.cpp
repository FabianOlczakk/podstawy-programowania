#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    for (int i = 1; i < 12; i++) {
        cout << setprecision(i) << M_PI << "\n";
    }

    return 0;
}