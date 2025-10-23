// Full Pyramid

#include<iostream>
using namespace std;

int main(){
    int n =6;
    for(int row=0; row<n; row++){
        // For Spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";  
        }
        // For Stars
        for(int col=0; col<row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}