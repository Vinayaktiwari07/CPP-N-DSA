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

void convertIntoUpperCase(char name[]){
    int n = getLength(name);

    for(int i=0; i<n; i++){
        name[i] = name[i]- 'a' + 'A';
    }
}
int main() {
    char name[100] ;
    cout << "Enter here: ";
    cin.getline(name, 100);

    convertIntoUpperCase(name);

    cout << name;

    return 0;
}