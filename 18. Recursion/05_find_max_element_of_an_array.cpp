#include<iostream>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi){
    // base case
    if(i >= n){
        // array agr khatam hogya, poora traverse hogya
        // toh wapas aa jao
        return;
    }

    // 1 case solve krna hai
    // current element ko check karo for max
    if(arr[i] > maxi){
        maxi = arr[i];
    }

    // baaki recursion sambhal lega
    findMax(arr, n, i+1, maxi);
}
int main() {
    int arr[] = {10,30,21,44,32,19,17,66};
    int n = 8;

    int maxi = INT32_MIN;

    int i=0;
    findMax(arr, n, i, maxi);

    cout << "Maximum number is: " << maxi << endl;
    return 0;
}