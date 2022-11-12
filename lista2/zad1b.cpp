#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    for (int i = 0; i < 11; i++) {
        printf("%0.*f\n", i, M_PI);
    }

    return 1;
}