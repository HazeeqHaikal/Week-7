#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    bool status = false;
    char membership;
    char cupSize;
    char specialCode;
    bool discount = false;
    float price = 0.00;

    cout << "Do you have membership? Yes(Y) or No (N): ";
    cin >> membership;

    if (toupper(membership) == 'Y') {
        status = true;
    }

    cout << "What are your desired cup size? Medium(M) or Large(L): ";
    cin >> cupSize;

    cupSize = toupper(cupSize);

    cout << "Enter the special code: ";
    cin >> specialCode;

    if (toupper(specialCode) == 'T') {
        discount = true;
    }

    if (cupSize == 'M' && status == true) {
        price = 18.00;
    } else if (cupSize == 'L' && status == true) {
        price = 20.00;
    } else if (cupSize == 'M' && status == false) {
        price = 22.00;
    } else if (cupSize == 'L' && status == false) {
        price = 25.00;
    } else {
        cout << "Invalid cup size." << endl;
    }

    if (discount == true) {
        price = price - (price * 0.10);
    }
    if (price != 0.00) {
        cout << fixed << setprecision(2) << "Price: RM" << price << endl;
    }

    return 0;
}