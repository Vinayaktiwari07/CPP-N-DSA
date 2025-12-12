#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void replaceSpaces(char sentence[]){
    int n=strlen(sentence);

    for(int i=0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}
int main() {
    char sentence[100];
    cout << "Enter your name here ";
    cin.getline(sentence, 100);

    replaceSpaces(sentence);
    cout << "printing sentence: " ;
    cout << sentence << endl;

    return 0;
}