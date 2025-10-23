// Taking input in Arrey.

#include<iostream>
using namespace std;

int main(){

    // Taking Input of Arrey.
    int arr[5];
    int n=5;

    for(int i=0; i<n; i++){
        cout << "Enter the value for index " << i << ": " <<endl;
        cin >> arr[i];
        cout << endl;
    }
    cout << "Printing the Arrey "<< endl;


    // Printing Input that you have taken above.
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}