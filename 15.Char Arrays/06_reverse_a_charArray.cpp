#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i=0;

    while(name[i] != '\0'){
        length++;
        i++;
    }

    return length;
}

void reverseCharArray(char name[]){
    int start = 0;
    int n = getLength(name);
    int end = n-1;

    while(start<=end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}
int main() {
    char name[100];
    cout << "Enter your name here ";
    cin >> name;

    // cout << "length is: " << getLength(name) << endl;
    // cout << "Length is " << strlen(name) << endl; 

    cout << "initially: " << name << endl;
    reverseCharArray(name);
    cout << "After reversal process: " << name << endl;
    return 0;
}