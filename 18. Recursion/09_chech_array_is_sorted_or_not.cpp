#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &v, int& n, int i){
    // base case
    if(i == n-1){
        return true;
    }

    // 1 case solve krna hai
    if(v[i+1] < v[i]){
        return false;
    }

    // baaki recursion sambhal lega
    return checkSorted(v, n, i+1);
}
int main() {
    vector<int> v{10,20,30,40,50};
    int n = v.size();

    int i=0;
    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout << "Array is soretd" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}