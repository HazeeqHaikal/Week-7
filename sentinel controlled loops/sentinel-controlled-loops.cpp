#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;

        cout << "Press Y to input another number: ";
        cin >> choice;
        choice = toupper(choice);

    } while (choice == 'Y');

    return 0;
}