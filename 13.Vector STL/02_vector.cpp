#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    cout << "Printing vector " << endl;
    int size = v.size();
    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v;  //array hi hai.

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    print(v);
    for(int i=0; i<10; i++){
        v.push_back(80);
    }

    // i want to clear the vector.
    // v.clear();


    print(v);
    return 0;
}