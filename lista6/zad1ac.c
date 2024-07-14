#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

    typedef struct {
        int seatNum;
        char name[30];
        bool status;
    } seat;

    int seatAmount = 8;
    seat * bus = calloc(seatAmount, sizeof(*bus));
    if(!bus) {
        printf("Blad podczas przydzielania pamieci.");
        return -1;
    }

    for(int i = 0; i < seatAmount; i++) {
        bus[i].seatNum = i+1;
        strcpy(bus[i].name, "");
        bus[i].status = false;
    }

    int c;
    char n[30];
    while (true){
        printf("\nWybierz zadanie:\n[1]\tWyswietl dostepne miejsca.\n[2]\tZarezerwuj miejsce.\n[3]\tZakoncz program.\n");
        scanf("%d", &c);

        if (c == 1) {
            printf("\nMiejsce:\tStan:\n");
            for (int i = 0; i < seatAmount; i++) {
                printf("%d", bus[i].seatNum);
                if (bus[i].status) printf("\t\tZajete\n");
                else printf("\t\tWolne\n");
            }
        }
        else if (c == 2) {
            printf("\nPodaj numer miejsca, ktore chcesz zarezerwowac: ");
            scanf("%d", &c);

            printf("\nPodaj imie pasazera: ");
            scanf("%s", n);

            if (c > seatAmount || c < 1) c = seatAmount;

            if (!bus[c-1].status) {
                bus[c-1].status = true;
                strcpy(bus[c-1].name, n);
                printf("\nMiejsce zarezerwowane.");
            }
            else printf("Miejsce jest juz zajete");
        }
        else break;
    }

    free(bus);
    return 0;
}
