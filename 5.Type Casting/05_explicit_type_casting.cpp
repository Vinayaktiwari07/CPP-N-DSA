// Explicit conversion from float to char

#include<iostream>
using namespace std;

int main(){
    float floatingNo = 65.5;
    char charvalue = (char)floatingNo;
    cout << charvalue << endl;

    return 0;
}