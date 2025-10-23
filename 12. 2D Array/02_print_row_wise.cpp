#include<iostream>
using namespace std;
int main() {
    // declare 2D array
    int arr[3][3];

    //initialisation
    int brr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    for(int row=0;row<n; row++){
        for(int col=0;col<n;col++){
            cout << brr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}