// printing Binary Representation of Decimal.

// ULTRA IMPORTANT----

#include <iostream>
using namespace std;

void printBinary(int num) {
    if (num == 0) {
        cout << 0;
        return;
    }

    if (num < 0) {
        cout << "-";
        num = -num;
    }

    int binary[32];  // assuming 32-bit integers
    int index = 0;

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // print in reverse order
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    cout << "Binary representation: ";
    printBinary(number);
    cout << endl;

    return 0;
}