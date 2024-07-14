#include <fstream>
#include <iostream>
using namespace std;

void changeSign(const std::string& filename) {
    ifstream file(filename);
    double number;
    while (file >> number) {
        file.seekg(-sizeof(double), ios_base::cur);
        number *= -1;
        file.write(reinterpret_cast<char*>(&number), sizeof(double));
    }
    file.close();
}