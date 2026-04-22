#include<iostream>
using namespace std;

void findMin(int arr[], int n, int i, int& mini){
    // base case
    if(i >= n){
        // array agr khatam hogya, poora traverse hogya
        // toh wapas aa jao
        return;
    }

    // 1 case solve krna hai
    // current element ko check karo for max
    if(arr[i] < mini){
        mini = arr[i];
    }

    // baaki recursion sambhal lega
    findMin(arr, n, i+1, mini);
}
int main() {
    int arr[] = {10,30,21,44,32,19,17,66};
    int n = 8;

    int mini = INT32_MAX;

    int i=0;
    findMin(arr, n, i, mini);

    cout << "Minimum number is: " << mini << endl;
    return 0;
}