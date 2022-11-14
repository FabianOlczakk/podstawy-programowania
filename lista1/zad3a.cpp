#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    int a, b, max;
	
	printf("Podaj a: ");
    scanf("%i", &a);
    printf("Podaj b: ");
    scanf("%i", &b);

	if(a>b) {
		max = a;
		printf("max=a=%i", a);
		
	} else if(a<b)
	{
		max = b;
		printf("max=b=%i", b);
		
	} else {
		max = a;
		printf("max=a=b=%i=%i", a, b);
		
	}

    return 0;
}