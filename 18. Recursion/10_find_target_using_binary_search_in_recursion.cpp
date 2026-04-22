#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& target){
    // base case
    // case 1 ->key not found
    // s>e -> invalid array
    if(s>e){
        return -1;
    }

    int mid = (s+e)/2;

    //case 2 ->key found
    if(arr[mid] == target){
        return mid;
    }

    // arr[mid] < target -> right me search 
    if(arr[mid] < target){
        return binarySearch(arr, mid+1, e, target);
    }
    else{ // arr[mid] > target -> left me search
        return binarySearch(arr, s, mid-1, target);
    }
}
int main() {
    vector<int> arr{10,20,30,40,50,60,59};
    int target = 60;

    int n = arr.size();
    int s = 0;
    int e = n-1;
    int ans = binarySearch(arr, s, e, target);

    cout << "Answer is: " << ans << endl;
    return 0;
}