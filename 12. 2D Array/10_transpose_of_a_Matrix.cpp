#include<iostream>
using namespace std;

void transpose(int arr[][3], int r, int c, int transposeArr[][3]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            // swap(arr[i][j], arr[j][i]);
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int r = 3;
    int c = 3;
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,99}};
    int transposeArr[3][3];
    transpose(arr, r, c, transposeArr);
    printArray(transposeArr, r, c);
    
    return 0;
}