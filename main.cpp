#include "CarNumber.h"
#include <vector>

int CarNumber::count = 1;
char CarNumber::seria1 = 'A';
char CarNumber::seria2 = 'A';

int main() {

    vector<CarNumber> dia(10);
    for (int i =0; i < dia.size(); i++) {
        cout << dia[i].getNumber() << endl;
    }


    return 0;
}