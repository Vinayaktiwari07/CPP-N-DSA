// Function for Printing Sum of Number

#include<iostream>
using namespace std;

void sumNum(int a, int b, int c){
    int ans = a + b + c;
    cout << "Sum is: " << ans << endl;
}

int main(){
    sumNum(1, 2, 3);
    return 0;
}