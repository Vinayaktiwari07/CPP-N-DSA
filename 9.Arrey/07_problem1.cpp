//Questio->  Create arrey of size 10.
           //Take arrey as input from user.
           // double-up the input.
           //print the arrey.

#include<iostream>
using namespace std;

int main(){
    // Create arrey
    int arr[10];
    int n=10;
    // Input lelo.
    for(int i=0; i<n; i++){
        cout << "Enter the value for index " << i << ": " <<endl;
        cin >> arr[i];
        cout << endl;
    }
    cout << "Printing after Taking input. "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    // Double-up the input.
    for(int i=0; i<n; i++){
        arr[i] = arr[i]*2;
    }
    // printing Doubling values.
    cout << "Printing after Taking input. "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}