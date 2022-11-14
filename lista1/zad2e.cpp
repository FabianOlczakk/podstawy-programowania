#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    float a, p, n;
	
	printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj p: ");
    scanf("%f", &p);
    printf("Podaj n: ");
    scanf("%f", &n);
    printf("k = %f", a*pow(1 + p/100, n));

    return 0;
}