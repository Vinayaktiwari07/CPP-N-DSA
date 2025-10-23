// Question ->   Create an arrey of size=5.
               //take arrey as input from user.
               //print the sum of all the elements.
               

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n=5;
    int sum = 0;

    for(int i=0; i<n; i++){
        cout << "Enter the value for index " << i << ": " <<endl;
        cin >> arr[i];
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << "Total sum of all arrey is: " << sum <<endl;

    return 0;
}