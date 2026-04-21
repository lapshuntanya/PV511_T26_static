#include "CarNumber.h"
#include <vector>

int CarNumber::count = 1;
char CarNumber::seria1 = 'A';
char CarNumber::seria2 = 'A';

int main() {

    vector<CarNumber> dia(10);
    for (int i =0; i < dia.size(); i++) {
        cout << dia[i].getNumber() << " ";
    }cout << endl;

    string user;
    cout << "Input number: ";
    cin >> user; //"0005AA"

    //[](){}
    //vector<CarNumber>::iterator it;
    auto it = find_if(dia.begin(), dia.end(), [user](CarNumber a) {
        return a.getNumber() == user;
    });
    if (it != dia.end()) {
        dia.erase(it);
        dia.push_back(CarNumber());
    }
    cout << "__________________________________\n\n";
    for (auto a: dia) {
        cout << a.getNumber() << " ";
    }cout << endl;

    return 0;
}