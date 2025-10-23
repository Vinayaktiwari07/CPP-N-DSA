#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int &k = n; // nickname given 'n'
    int &c = n; // nickname given 'n'
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    return 0 ;
}