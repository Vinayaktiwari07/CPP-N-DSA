#include<iostream>
using namespace std;

// NEW METHOD:-
void maxNo(int a, int b, int c){
    int ans = max(a,b); // max is in-build fnx that find out max between two number only.
    int finalans = max(ans,c);
    cout << "Final Ans is: " << finalans << endl;
}


// OLD METHOD:-

// void maxNo(int a, int b, int c){
//     if(a>b && a>c){
//         cout << "Maximum is: " << a << endl;
//     }
//     else if(b>a && b>c){
//         cout << "Maximum is: " << b << endl;
//     }
//     else{
//         cout << "Maximum is: " << c << endl;
//     }
// }

int main(){
    maxNo(3,4,5);
    return 0;
}