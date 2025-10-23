#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main() {
    int rows = 3;
    int cols = 3;
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,99}};
    cout << "Max Number is: " << getMax(arr,rows,cols);
    return 0;
}