//
// Created by Tetiana Perederii on 21.04.2026.
//

#ifndef PV511_T26_STATIC_CARNUMBER_H
#define PV511_T26_STATIC_CARNUMBER_H

#include <string>
#include <iostream>
using namespace std;

class CarNumber {
    string number;

    static int count;
    static char seria1;
    static char seria2;

public:
    CarNumber();

    string getNumber()const;
    static void showCounters();
};


#endif //PV511_T26_STATIC_CARNUMBER_H