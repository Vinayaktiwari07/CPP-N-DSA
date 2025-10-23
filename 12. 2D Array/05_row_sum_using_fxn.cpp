#include<iostream>
using namespace std;

void printRowWiseSum(int brr[][3], int i, int j){
    for(int row=0;row<i; row++){
        int sum = 0;
        for(int col=0;col<j;col++){
            sum = sum + brr[row][col];
        }
        cout << sum << " ";
    }
}
int main() {
    int brr[4][3] ={{1,2,3},{4,5,6},{7,8,9},{4,3,2}};
    int i = 4;
    int j = 3;
    printRowWiseSum(brr, i, j);
    return 0;
}