#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
            // search in left
            end = mid - 1;
        }
        else{
            // search in right
            start = mid+1;
        }

        mid = start + (end - start) / 2;

    }
    //element not found
    return -1;
}

int main() {
    vector<int> v{1,2,3,4,5,6};

    if(binary_search (v.begin(), v.end(), 3)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
}