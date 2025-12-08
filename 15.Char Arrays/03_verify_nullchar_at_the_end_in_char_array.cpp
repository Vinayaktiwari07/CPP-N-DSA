// null character is store by-default at the end index of the char array
// jab kabhi hum sequential input lete hai character ka tb ye null charcter store hoga.

#include<iostream>
using namespace std;
int main() {
    char name[100];
    cin >> name;

    for(int i=0; i<8; i++){
        cout << "index: " << i << " value: " << name[i] << endl;
    }

    int value = (int)name[7];  // Here at 7 index there is a null character
    cout << "value is: " << value << endl;
    return 0;
}