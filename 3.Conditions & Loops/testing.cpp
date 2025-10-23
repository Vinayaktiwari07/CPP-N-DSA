// #include<iostream>
// using namespace std;

// int main(){

//     for(int i = 1; i <= 11; i++){
//         cout << "Siri" << endl;
//     }
//     // int age = 10;
//     // if(age<=10){
//     //     cout << "Hello" << endl;
//     // }
//     // cout << "Hii" << endl;
    
//     return 0;
// }

// int main(){
//     int n = 19;
//     for(int i = 1; i <= 10; i++){
//         cout << n << "X" << i << "=" << n*i << endl; 
//     }

//     return 0;
// }


// int main(){

//     for(int i = 1; i <= 4; i++){
//         cout << "* * * *" << endl;
//     }

//     return 0;
// }

// int main(){
//     for(int i = 0; i < 4; i++){
//         for(int j=0; j < 4; j++){
//             cout << "* " ;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     for(int i = 0; i<5; i++){
//         if(i==0 || i==4){
//             cout << "* * * * *" << endl;
//         }else{
//             cout << "*       *" << endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     for(int i=0; i<8;i++){
//         for(int j=0; j<7; j++){
//             if(i==0 || i==7){
//                 cout << "* ";
//             }
//             else{
//                 if(j==0 || j==6){
//                     cout << "* ";
//                 }
//                 else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

// int main(){
//     for(int i=0; i<8; i++){
//         for(int j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n =8;

//     for(int row=0; row<n; row++){
//         for(int col=0; col< n-row; col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 5;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row-1; col++){
//             cout << " ";
//         }
//         for(int col=0; col<row+1; col++){
//             if(col==0 || col==row){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 5;
//      for (int row = 1; row <= n; row++) {
//         // Print the starting digit
//         cout << row;

//         // Print spaces for middle portion (starts from 1st row with no space)
//         for (int col = 1; col <= n - row - 1; col++) {
//             cout << " ";
//         }

//         // Print the ending digit if it's not the last row
//         if (row != n) {
//             cout << n;
//         }

//         cout << endl;
//     }


    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         if(row == 0 || row == n-1){
    //             cout << col+1;
    //         }
    //         else{
    //             // if(col == 0 || col == n-row-1){
    //             //     cout << col;
    //             // }
    //             if(col==0){
    //                 cout << row+1 ;
    //             }
    //             else if (col==n-row-1)
    //             {
    //                 cout << n;
    //             }
    //             else if(row==n-1){
    //                 cout << 5;
    //             }
                
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; ++i) {
//         // Print the starting digit
//         cout << i;

//         // Print spaces for middle portion (starts from 1st row with no space)
//         for (int j = 1; j <= n - i - 1; ++j) {
//             cout << " ";
//         }

//         // Print the ending digit if it's not the last row
//         if (i != n) {
//             cout << n;
//         }

//         cout << endl;
//     }
//     return 0;
// }


