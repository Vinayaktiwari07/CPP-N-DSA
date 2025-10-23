#include<iostream>
using namespace std;

int main(){
    int n = 7;

    for(int i=0; i<n;i++){
        if(i==3){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}