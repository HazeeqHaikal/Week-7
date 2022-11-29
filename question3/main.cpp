#include <iostream>
using namespace std;

int main() {
    int no_input, number;
    cout << "How many numbers do you wish to enter? ";
    cin >> no_input;

    // step 1 & 2
    int smallest = 10000;
    int largest = -10000;

    int countE = 0;
    int countO = 0;
    int total = 0;

    cout << endl;
    for (int counter = 1; counter <= no_input; counter++) {
        cout << "Enter number " << counter << ": ";
        cin >> number;

        // step 3
        if (number > largest)
            largest = number;  // step 4
        if (number < smallest)
            smallest = number;

        if (number % 2 == 0)
            countE++;
        else
            countO++;

        total += number;
    }
    cout << "\nThe largest number is " << largest << endl;
    cout << "The smallest number is " << smallest << endl;

    cout << "The number of even numbers is " << countE << endl;
    cout << "The number of odd numbers is " << countO << endl;

    cout << "The total of all numbers is " << total << endl;

    float average = total / (float)no_input;

    cout << '\n'
         << "The average of all numbers is " << average << endl;

    return 0;
}