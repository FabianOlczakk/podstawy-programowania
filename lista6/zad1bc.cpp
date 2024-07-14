#include <iostream>
#include <string>
using namespace std;

struct seat {
    int seatNum;
    string name;
    bool status;
};

int main() {
    int seatAmount = 8;

    try {
        seat * bus = new seat[seatAmount];
        delete [] bus;
    }
    catch(bad_alloc&) {
        cout << "Blad podczas przydzielania pamieci.";
        return -1;
    }

    seat * bus = new seat[seatAmount];

    for(int i = 0; i < seatAmount; i++) {
        bus[i].seatNum = i+1;
        bus[i].name = "";
        bus[i].status = false;
    }

    int c;
    string n;
    while (true){
        cout << "\nWybierz zadanie:\n" << "[1]\tWyswietl dostepne miejsca.\n" << "[2]\tZarezerwuj miejsce.\n" << "[3]\tZakoncz program.\n";
        cin >> c;

        if (c == 1) {
            cout << "\nMiejsce:\tStan:\n";
            for (int i = 0; i < seatAmount; i++) {
                cout << bus[i].seatNum;
                if (bus[i].status) cout << "\t\tZajete\n";
                else cout << "\t\tWolne\n";
            }
        }
        else if (c == 2) {
            cout << "\nPodaj numer miejsca, ktore chcesz zarezerwowac: ";
            cin >> c;

            cout << "\nPodaj imie pasazera: ";
            cin >> n;

            if (c > seatAmount || c < 1) c = seatAmount;

            if (!bus[c-1].status) {
                bus[c-1].status = true;
                bus[c-1].name = n;
                cout << "\nMiejsce zarezerwowane.";
            }
            else cout << "Miejsce jest juz zajete";
        }
        else break;

    }

    delete [] bus;

    return 0;
}
