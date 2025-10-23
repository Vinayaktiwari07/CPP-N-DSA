#include<iostream>
using namespace std;

int main(){
    int n = 6;
    for(int i=0; i<n; i++){
        if(i==3){
            break;
        }
        cout << i << endl;
    }
    return 0;
}