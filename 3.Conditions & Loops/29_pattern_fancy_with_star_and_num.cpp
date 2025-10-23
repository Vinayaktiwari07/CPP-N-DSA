// Printing Fancy pattern with star and number.

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=0; row<n; row++){
        for(int col=0; col<n-row+3;col++){
            cout<<"*";
        }
        for(int col=0; col<row+1; col++){
            if(col==row){
                cout << row+1;
            }
            else{
                cout << row+1 << "*";
            }
        }
        for(int col=0; col<n-row+3;col++){
            cout<<"*";
        }
        cout << endl;
    }
    return 0 ;
}