#include<iostream>
using namespace std;

int getUnique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i]; //XOR duplicate ko cancel out kr dega.
    }
    return ans;
}

int main(){
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 7, 9};
    int n=9;

    int uniqueNo = getUnique(arr, n);
    cout << "Unique number is: " << uniqueNo << endl;

    return 0;
}