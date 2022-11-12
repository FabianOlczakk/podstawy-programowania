#include <stdio.h>
#include <string>

using namespace std;

string decToHex(int nDec)
{
    string nHex;

    while (nDec != 0) {
        int reminder = 0;
        char ch;
        reminder = nDec % 16;

        if (reminder < 10) {
            ch = reminder + 48;
        }
        else {
            ch = reminder + 55;
        }

        nHex += ch;
        nDec = nDec / 16;
    }

    int i = 0;
    int l = nHex.size() - 1;
    while(i <= l)
    {
        swap(nHex[i], nHex[l]);
        i++;
        l--;
    }
    return nHex;
}

int decToOct(int nDec) {
    int rem;
    int nOct = 0;
    int i = 1;

    while(nDec != 0) {
        rem = nDec%8;
        nDec = nDec/8;
        nOct = nOct + (rem*i);
        i = i*10;
    }
    return nOct;
}

int main() {

    for (int i = 32; i < 128; i++) {
        printf("%i\t%c\t%s\t%i\n", i, char(i), decToHex(i).c_str(), decToOct(i));
    }

    return 1;
}