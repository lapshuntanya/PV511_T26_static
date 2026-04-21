//
// Created by Tetiana Perederii on 21.04.2026.
//

#include "CarNumber.h"

CarNumber::CarNumber() {
    //count = 1, number = 0001AA

    number = to_string(count/1000) + to_string(count / 100 % 10) +
        to_string(count / 10 % 10) + to_string(count % 10) + seria1 + seria2;

    count++;
    if (count > 9999) {
        count = 1;
        seria2++;
        if (seria2 > 'Z') {
            seria2 = 'A';
            seria1++;
            if (seria1 > 'Z') {
                count = 1;
                seria1 = 'A';
                seria2 = 'A';
            }
        }
    }
}

string CarNumber::getNumber() const {
    return number;
}

void CarNumber::showCounters() {
    cout << "Count: " << count << endl;
    cout << "Seria: " << seria1 << endl;
    cout << "Seria: " << seria2 << endl;
}
