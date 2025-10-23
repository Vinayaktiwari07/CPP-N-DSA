#include<iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

//0 -> False
//1 -> True
int main() {
    int key = 6;
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << findKey(arr,3,3,key);
    return 0;
}