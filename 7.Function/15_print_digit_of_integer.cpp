// Printing Digits of the Integer.

// ULTRA IMPORTANT----

#include <iostream>
using namespace std;

void printDigits(int num) {
    if (num < 0) {
        cout << "- ";
        num = -num;
    }

    if (num < 10) {
        cout << num << " ";
        return;
    }

    printDigits(num / 10);     // Print all digits except the last
    cout << num % 10 << " ";   // Then print the last digit
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "Digits: ";
    printDigits(number);
    cout << endl;

    return 0;
}