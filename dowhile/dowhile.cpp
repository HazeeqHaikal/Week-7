#include <iostream>
#include <string>

using namespace std;

int main() {
    // display all odd number from 25 to 10 using do while
    int i = 25;
    int sum = 0;
    do {
        if (i % 2 != 0) {
            cout << i << " ";
            sum += i;
        }
        i--;
    } while (i >= 10);

    cout << endl
         << "Sum of odd numbers: " << sum << endl;

    return 0;
}