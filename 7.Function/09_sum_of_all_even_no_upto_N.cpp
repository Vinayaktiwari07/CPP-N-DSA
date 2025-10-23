// Find the sum of all Even numbers upto N.

#include<iostream>
using namespace std;

void SumofEvenNo(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    cout << "Sum of Even numbers upto N is: " << sum << endl;
}

int main(){
    SumofEvenNo(12);

    return 0;
}