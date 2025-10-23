// Sum of number upto N.

#include<iostream>
using namespace std;

int SumNumUptoN(int n){
    int sum=0;
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    return sum;

}

int main(){
    int sumofnum = SumNumUptoN(10);
    cout<<"Sum of N number is: " << sumofnum << endl;
    return 0;
}