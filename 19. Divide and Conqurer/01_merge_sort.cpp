#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIdx = 0;
    int rightIdx = 0;
    int mainArrIdx = s;

    while(leftIdx < len1 && rightIdx < len2){
        if(left[leftIdx] < right[rightIdx]){
            arr[mainArrIdx++] = left[leftIdx++];
        }
        else{
            arr[mainArrIdx++] = right[rightIdx++];
        }
    }

    // copy logic for left array
    while(leftIdx < len1){
        arr[mainArrIdx++] = left[leftIdx++];
    }

    // copy logic for right array
    while(rightIdx < len2){
        arr[mainArrIdx++] = right[rightIdx++];
    }
}

void mergeSort(int arr[], int s, int e){
    // base case
    // s == e -> sigle element
    // s > e -> invalid array

    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    // left part sort kardo recursion bhaiya
    mergeSort(arr, s, mid);

    // right part sort krdo recursion bhaiya
    mergeSort(arr, mid+1, e);

    // now merge 2 sorted arrays
    merge(arr, s, e);
}

int main() {
    int arr[] = {4,13,5,13,2,12,2,2,2,2,2,2};
    int n = 12;

    int s = 0;
    int e = n-1;

    //calling merSort function
    mergeSort(arr, s, e);

    // Printing the array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}