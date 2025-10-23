#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a>>b;
    int op;
    cout << "What Operation you want to do?" <<endl;
    cin>>op;
    float ans = 0;

    switch(op){
        case 0:
            cout << "Add case" << endl;
            ans = a+b;
            break;  //Break jroor lagana hai each n every case me.
        case 1:
            cout << "Sub case" << endl;
            ans = a-b;
            break;
        case 2:
            cout << "Mul case" << endl;
            ans = a*b;
            break;
        case 3:
            cout << "Div case" << endl;
            ans = a/b;
            break;
        default:
            cout << "Invalid Operation" << endl;
            return 0;
    }
    cout << "Your ans is:" << ans << endl;
    return 0;
}