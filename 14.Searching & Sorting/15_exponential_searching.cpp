#include<iostream>
using namespace std;

int bs(int arr[], int start, int end, int target){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expSearch(int arr[], int n, int target){
    if(arr[0] == target) return 0;

    int i=1;
    while(i<n && arr[i] <= target){
        i=i*2;
    }
    return bs(arr, i/2, min(i, n-1), target);
}
int main() {
    int arr[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(arr) / sizeof(int);
    int target = 13;
    int ans = expSearch(arr, n, target);
    cout << "Index is: " << ans << endl;
    cout << "Value at "<< ans << " Index is: " << arr[ans] << endl;
    return 0;
}