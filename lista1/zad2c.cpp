#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    float a, b;
	
	printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj b: ");
    scanf("%f", &b);
    printf("c = %f", sqrt(a*a + b*b));

    return 0;
}