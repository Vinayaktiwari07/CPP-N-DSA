#include<iostream>
using namespace std;
int main() {
    // declare 2D array
    int arr[3][3];

    //initialisation
    int brr[4][3] ={{1,2,3},{4,5,6},{7,8,9},{4,3,2}};
    int i = 4;
    int j = 3;
    for(int row=0;row<i; row++){
        int sum = 0;
        for(int col=0;col<j;col++){
            sum = sum + brr[row][col];
        }
        cout << sum << " ";
    }
    return 0;
}