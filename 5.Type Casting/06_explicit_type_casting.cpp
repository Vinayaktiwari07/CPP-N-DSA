// Explicit conversion from int to float

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 3.0;
    float c = a/((float)b);
    cout << c << endl;

    return 0 ;
}