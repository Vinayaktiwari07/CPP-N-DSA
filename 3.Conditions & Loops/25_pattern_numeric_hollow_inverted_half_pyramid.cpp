// Printing Numeric Hollow Inverted Half pyramid

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int row = 1; row <= n; row++) {
        if (row == 1) {
            // First row: print 1 to 5
            for (int col = 1; col <= n; col++) {
                cout << col;
            }
        } else if (row < n) {
            // Rows 2 to n-1: starting digit, spaces, then 5
            cout << row;
            for (int col = 1; col <= n - row - 1; col++) {
                cout << " ";
            }
            cout <<  n;
        } else {
            // Last row: just 5
            cout << n;
        }
        cout << endl;
    }

    return 0;
}