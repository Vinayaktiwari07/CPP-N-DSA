#include<iostream>
using namespace std;


void printArrey(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size=5;
    printArrey(arr, size);

    return 0;
}