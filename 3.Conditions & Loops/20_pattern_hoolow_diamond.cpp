// Printing Hollow Pyramid

#include<iostream>
using namespace std;

int main(){
    int num = 6;
    int n = num/2;
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
    for(int row=0; row<n; row++){
        // Spaces
        for(int col=0; col<row;col++){
            cout << " ";
        }
        // Stars
        int totalcol = n-row;
        for(int col=0; col<totalcol; col++){
            if(col==0 || col==totalcol-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}