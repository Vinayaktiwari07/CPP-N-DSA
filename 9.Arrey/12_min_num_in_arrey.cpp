#include<iostream>
#include<limits.h>
using namespace std;

int findMinInArray(int arr[], int size){
    // ans store variable 
    int minAns = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    int arr[] = {2,6,4,8,9,12};
    int size = 6;

    int minimum = findMinInArray(arr, size);
    cout << "Minimum number is: "<< minimum << endl;

    return 0;
}