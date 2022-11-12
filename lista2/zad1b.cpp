#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    float pi = 3.14159265358979323846;

    for (int i = 0; i < 11; i++) {
        printf("%0.*f\n", i, M_PI);
    }

    return 0;
}