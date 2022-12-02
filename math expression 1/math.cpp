#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int k, A, L;
    char t[2];

    cout << "Enter k value: ";
    cin >> k;

    cout << "Enter A value: ";
    cin >> A;

    cout << "Enter L value: ";
    cin >> L;

    cout << "Enter t1 value: ";
    cin >> t;

    cout << "Enter t2 value: ";
    cin >> t;

    float q = ((k * A) * (t[0] - t[1])) / (float)L;
    cout << "q: " << q << endl;
    return 0;
}