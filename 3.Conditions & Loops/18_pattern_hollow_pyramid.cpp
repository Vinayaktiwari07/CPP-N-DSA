// Printing Hollow Pyramid

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    // For Spaces
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // For Stars
        for(int col=0; col<row+1; col++){
            // Print Star for First and Last col
            if(col==0 || col==row){
                cout << "* ";
            }
            else{
                // For every col between first and last col, print Spaces
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}