#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end){
    // base case
    if(start >= end){
        return;
    }

    // ek case
    swap(s[start], s[end]);

    // baaki recursion sambhhal lega
    reverse(s, start+1, end-1);
}

int main() {
    string s;
    cout << "Enter your string: ";
    cin >> s;
    reverse(s, 0, s.size()-1);
    cout << s << endl;
    return 0;
}