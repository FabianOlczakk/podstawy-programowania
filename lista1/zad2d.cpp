#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    float a, b, y;
	
	printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj b: ");
    scanf("%f", &b);
    printf("Podaj kat y: ");
    scanf("%f", &y);
    printf("c = %f", sqrt(a*a + b*b - 2*a*b*cos(y)));

    return 0;
}