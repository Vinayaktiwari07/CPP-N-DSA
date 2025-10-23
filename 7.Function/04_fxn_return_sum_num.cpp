// Function for Return Sum of Number

#include<iostream>
using namespace std;

int sumNum(int a, int b, int c){
    int ans = a + b + c;
    return ans;
}

int main(){
    int Sum = sumNum(1, 2, 3);
    cout << "Sum is: " << Sum << endl;
    return 0;
}