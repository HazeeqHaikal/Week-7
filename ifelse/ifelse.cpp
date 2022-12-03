#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1 = 3, num2 = 10, num3 = 7;

    if ((num1 != num2) || (num3 == num2))
        num1++;
    num3 = 3;
    if (num3 > num1)
        num3 = 2;
    num2 = 4;
    if (num1 == num2)
        num1 = 5;
    else
        num1 = 6;
    
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}