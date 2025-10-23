#include<iostream>
using namespace std;


int main(){
    for(int i=0; i<8;i++){
        for(int j=0; j<7; j++){
            if(i==0 || i==7){
                cout << "* ";
            }
            else{
                if(j==0 || j==6){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}