#include<iostream>
using namespace std;

int main(){
    int age = 30;
    int car = 0;

    if (age>=18 && car>=1){
        cout << "Lincence mil jayega" << endl;
    }else if (age>=18 || car>=1)
    {
        cout << "licence nhi milega" << endl;
    }
    
    return 0;
}