// Printing Half Alphabetical And Reverse Pyramid

#include<iostream>
using namespace std;

int main(){
    int n = 6;

    for(int row=0; row<n; row++){
        char ch;
        for(int col=0; col<row+1; col++){
            int num = col+1;
            ch = num + 'A' -1;
            cout << ch;
        }
        //Jab tak A tk nhi pahuchte tab tk print krenge
        for(char alphabet = ch; alphabet>'A';){
            alphabet = alphabet-1;
            cout << alphabet;
        }
        cout << endl;
    }
    return 0;
}