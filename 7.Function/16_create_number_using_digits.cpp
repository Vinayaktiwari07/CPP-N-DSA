// Creating Number by using digits.

// ULTRA IMPORTANT----

#include <iostream>
using namespace std;

int makeNumber(int digits[], int size) {
    int number = 0;
    for (int i = 0; i < size; i++) {
        number = number * 10 + digits[i];
    }
    return number;
}

int main() {
    int digits[] = {1, 9, 3, 4};  // Example digits
    int size = sizeof(digits) / sizeof(digits[0]);

    int result = makeNumber(digits, size);
    cout << "The number formed is: " << result << endl;

    return 0;
}