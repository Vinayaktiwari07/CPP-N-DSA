#include<iostream>
using namespace std;

void shiftNegativeLeftSide(int arr[], int n){
    int j =0;
    // j-> memory block -> jaha pr mai n negative 
    // number store kr skta hu.

    for(int index=0; index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main() {
    int arr[] = {1,-2,3,-4,5,-6,7,-8};
    int n=8;

    shiftNegativeLeftSide(arr, n);

    //print
    cout << "Printing the array" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}