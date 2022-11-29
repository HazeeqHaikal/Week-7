#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0;
    int count = 0;
    for (i = 0; i <= 100; i++) {
        if (i % 2 == 0 && i % 5 == 0) {
            count++;
        }
    }
    cout << "There are " << count << " numbers divisible by 2 and 5 between 0 and 100." << endl;

    return 0;
}