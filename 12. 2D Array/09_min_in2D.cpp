#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main() {
    int rows = 3;
    int cols = 3;
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,99}};
    cout << "Min Number is: " << getMin(arr,rows,cols);
    return 0;
}