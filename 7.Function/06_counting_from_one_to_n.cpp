// Printing Counting from 1 to N.

#include<iostream>
using namespace std;

void Count(int n){
    for(int i=0; i<n;i++){
        cout << i+1 << endl;
    }
}

int main(){
    Count(10);

    return 0;
}