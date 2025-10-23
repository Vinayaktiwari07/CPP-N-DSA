// Method 1 for Printing Hollow Rectangle


#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<5; i++){
        if(i==0 || i==4){
            cout << "* * * * *" << endl;
        }else{
            cout << "*       *" << endl;
        }
    }
    return 0;
}