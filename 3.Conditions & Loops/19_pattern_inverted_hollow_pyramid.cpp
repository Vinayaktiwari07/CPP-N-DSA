// Printing Inverted Hollow Pyramid

#include<iostream>
using namespace std;

int main(){
    int n = 6;

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