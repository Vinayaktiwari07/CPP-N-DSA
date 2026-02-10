#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    cout << "First number is: " << a << " ";
    cout << "Second number is: " << b << endl << endl;
    return a > b;
}
int main() {
    vector<int> v{1,2,3,4,5,6,7,8};
    sort(v.begin(), v.end(), compare);
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}