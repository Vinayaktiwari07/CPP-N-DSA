#include<iostream>
using namespace std;

void printDigits(int n){
    // base case
    if(n == 0){
        return;
    }

    int newValueOfN = n / 10;
    // baaki recursion sambhal lega
    printDigits(newValueOfN);

    // 1 case mai solve krunga
    int digit = n%10;
    cout << digit << " ";
}
int main() {
    int n = 647;

    printDigits(n);

    return 0;
}