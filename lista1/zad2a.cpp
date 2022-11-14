#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    float r;

    printf("Podaj promien (r): ");
    scanf("%f", &r);
    printf("p = %f", (M_PI* pow(r, 2)));

    return 0;
}