// Printing Half Pyramid with Number And Stars

#include<iostream>
using namespace std;

int main(){
    int n =6;

    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1;col++){
        if(col%2 == 1){
            cout << "*";
        }
        else{
            cout << row+1;
        }
        }
        cout << endl;
    }
    return 0;
}


// ALTERNATIVE METHOD

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 6;

//     for(int row=0; row<n; row++){
//         int totalcol = row+1;
//         for(int col=0; col<totalcol; col++){
//             if(col==totalcol -1){
//                 cout << row+1;
//             }
//             else{
//                 cout << row+1 << "*";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }