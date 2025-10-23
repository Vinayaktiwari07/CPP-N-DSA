// Checking number is Prime or Not.

#include<iostream>
using namespace std;

// return true -> if N is a prime number
// return false -> if N is not a prime number
bool checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            // remainder = 0 -> perfectly divisible
            // then not a prime number.
            return false;
        }
    }
    return true;
}


int main(){
    bool prime = checkPrime(0);

    if(prime){
        cout << "It's a prime number" << endl;
    }
    else{
        cout << "It's not a prime number" << endl;
    }
    return 0;
}