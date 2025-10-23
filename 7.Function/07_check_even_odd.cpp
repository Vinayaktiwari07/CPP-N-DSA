// Check and Print Even or Odd.

#include<iostream>
using namespace std;

void evenOdd(int n){
    if(n%2==0){
        cout << "Even Number" << endl;
    }
    else{
        cout << " Odd Number" << endl;
    }
}

int main(){
    evenOdd(10);

    return 0;
}