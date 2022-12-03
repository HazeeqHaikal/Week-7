#include <iostream>
#include <string>

using namespace std;

int main() {
    string customerID;
    float averagePurchase;
    int voucher;
    char rated;
    char preffered;

    cout << "Enter customer ID: ";
    cin >> customerID;

    cout << "Enter average purchase: ";
    cin >> averagePurchase;

    cout << "Succesfully rated a product? Yes(Y) or No(N): ";
    cin >> rated;
    rated = toupper(rated);

    cout << "Purchase made from preffered customer? Yes(Y) or No(N): ";
    cin >> preffered;
    preffered = toupper(preffered);

    if (averagePurchase < 500) {
        voucher = 0;
    } else if (averagePurchase >= 500 && averagePurchase <= 1000 && rated == 'Y' && preffered == 'Y') {
        voucher = 400;
    } else if (averagePurchase > 1000) {
        voucher = 900;
    }

    cout << "\nCustomer ID: " << customerID << endl;
    cout << "Average weekly purchase: RM" << averagePurchase << endl;
    cout << "Voucher: RM" << voucher << endl;

    return 0;
}