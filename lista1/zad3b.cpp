#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    int n = 0;
    float a, b, c, suma, srednia;
    
    printf("Podaj a: ");
    scanf("%f", &a);
    n++;
    printf("Podaj b: ");
    scanf("%f", &b);
    n++;
    printf("Podaj c: ");
    scanf("%f", &c);
    n++;
	
	suma = a+b+c;
	srednia = suma/n;
	
	if (a == srednia) {
		printf("Wprowadziles takie same liczby.\n");
	}
	
	printf("suma=%f\n", suma);
	printf("srednia=%f", srednia);
	
    return 0;
}