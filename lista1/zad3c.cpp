#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{

    float a, b, c;
    a = 0;

    while (a == 0) {
        printf("Podaj parametr a: ");
        scanf("%f", &a);

        if (a == 0) printf("Podaj wlasciwy trojmian kwadratowy (a nie moze byc 0)\n");
    }

    printf("Podaj parametr b: ");
    scanf("%f", &b);

    printf("Podaj parametr c: ");
    scanf("%f", &c);

    float delta = b*b - 4*a*c;

    printf("Wierzcholek paraboli: W = (%f, %f)\n", (-b)/(2*a), (-delta)/(4*a));

    if (delta < 0) {
        printf("Parabola nie ma miejsc zerowych.\n");
    } else if (delta == 0) {
        printf("x0 = %f\n", ((-b) + sqrt(delta)) / (2*a));
    } else {
        printf("x1 = %f\n", ((-b) + sqrt(delta)) / (2*a));
        printf("x2 = %f\n", ((-b) - sqrt(delta)) / (2*a));
    }

    printf("Punkt przeciecia z OY: P = (0.0, %f)", c);


    return 0;
}