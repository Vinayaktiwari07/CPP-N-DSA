#include<iostream>
using namespace std;

bool checkKey(string str, int i, int n, char key){
    // base case
    if(i >= n){
        // key not found
        return false;
    }

    // 1 case ko solve kro
    if(str[i] == key){
        return true;
    }

    // baaki ka recursion kr lega
    return checkKey(str, i+1, n, key);
}
int main() {
    string str = "vinayak";
    int n = str.length();

    char key = 'v';

    int i=0;
    bool ans = checkKey(str, i, n, key);

    cout << "Answer is: " << ans << endl;
    return 0;
}