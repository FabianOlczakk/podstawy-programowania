#include <stdio.h>
using namespace std;

// aby funkcja kolorowego tekstu zadzialala nalezy uruchmic program w terminalu za pomoca ".\zad3d.exe"
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define BLU   "\x1B[34m"

void draw_triangle(char z, int color, int a) {
    if (color == 1) printf(RED);
    else if (color == 2) printf(GRN);
    else if (color == 3) printf(BLU);
    printf("\n");

    for (int i = 0; i < a; i++) {
        for (int l = 0; l <= i; l++) {
            printf("%c", z);
        }
        printf("\n");
    }
}

int main()
{
    printf("Wprowadz znak: ");
    char character;
    scanf("%c", &character);

    printf("Wybierz kolor:\n0 - domyslny\n1 - czerwony\n2 - zielony\n3 - niebieski\n");
    int color;
    scanf("%d", &color);

    printf("Wprowadz dlugosc boku: ");
    int a;
    scanf("%d", &a);

    draw_triangle(character, color, a);

    return 0;
}

