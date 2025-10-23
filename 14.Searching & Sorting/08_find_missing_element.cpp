#include<iostream>
using namespace std;
int main() {
    int arr[7]={1,2,3,4,6,7,8};
    int n=7;

    for(int i=0; i<n; i++){
        if((arr[i+1] - arr[i]) != 1){
            cout << arr[i]+1;
            break;
        }
    }
    return 0;
}