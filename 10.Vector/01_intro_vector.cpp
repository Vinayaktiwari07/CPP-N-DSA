#include<iostream>
#include <vector>
using namespace std;
int main() {
    
    // create vector
    vector<int>arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    //insert
    arr.push_back(7);
    arr.push_back(6);

    //print
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove ya delete
    arr.pop_back();

    //print
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}