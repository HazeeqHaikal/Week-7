#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    char customerType;
    float rateType, billAmount, billFee, serviceFee, premiumChannel;
    string accountNumber;
    float firstTen, extra;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    cout << "Residential (R)\nBusiness (B) \nEnter your customer type: ";
    cin >> customerType;
    customerType = toupper(customerType);

    cout << "Enter the amount of your premium channels: ";
    cin >> premiumChannel;

    if (customerType == 'R') {
        billFee = 4.5;
        serviceFee = 20.5;
        premiumChannel *= 7.5;
    } else if (customerType == 'B') {
        billFee = 15;
        if (premiumChannel <= 10) {
            serviceFee = 7.5 * premiumChannel;
        } else {
            firstTen = 7.5 * 10;
            extra = premiumChannel - 10;
            serviceFee = firstTen + (extra * 5.0);
        }
    } else {
        cout << "Invalid customer type" << endl;
    }

    billAmount = billFee + serviceFee + premiumChannel;
    cout << "\nAccount number: " << accountNumber << endl;
    cout << fixed << setprecision(2) << "Bill amount: RM" << billAmount << endl;

    return 0;
}