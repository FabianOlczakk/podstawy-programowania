#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    float a, b, c;
	
	printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj b: ");
    scanf("%f", &b);
    printf("Podaj c: ");
    scanf("%f", &c);

    // warunek sprawdza czy nie dzielimy przez zero
    if (b == 0 && c == 0) {
        printf("b oraz c nie moga byc 0");
    } else {
        printf("w = %f", ((a*b)/(b+c) + (a*c)/(b+c)));
    }


    return 0;
}