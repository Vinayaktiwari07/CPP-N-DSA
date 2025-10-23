// Printing all Prime Number from 1 to N.

#include<iostream>
using namespace std;

// return true -> if N is a prime number
// return false -> if N is not a prime number
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            // remainder = 0 -> perfectly divisible
            // then not a prime number.
            return false;
        }
    }
    return true;
}


int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: ";
    for (int i = 1; i <= N; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
