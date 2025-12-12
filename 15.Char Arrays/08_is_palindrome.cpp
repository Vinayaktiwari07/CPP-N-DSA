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

bool ispalindrome(char name[]){
    int n = strlen(name);
    int start = 0;
    int end = n-1;

    while(start<=end){
        if(name[start] != name[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }

    return true;

    // if(flag == true){
    //     cout << "Yes, It's a palindrome" << endl;
    // }
    // else{
    //     cout << "No, It's not a palindrome" << endl;
    // }
}
int main() {
    char name[100] ;
    cout << "Enter here: ";
    cin.getline(name, 100);

    cout << "Palindrome check: " << ispalindrome(name);
    return 0;
}