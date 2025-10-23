// Counting Set Bits of An Integer.

#include <iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num) {
        if (num & 1)  // check if the last bit is 1
            count++;
        num >>= 1;     // shift bits right
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = countSetBits(number);
    cout << "Number of set bits: " << result << endl;

    return 0;
}