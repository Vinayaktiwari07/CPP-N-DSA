#include<iostream>
using namespace std;

void fun(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }
}
int main() {
    // Static Memory allocation of Array
    // int a[5] = {1, 2, 3, 4, 5};

    // Dynamic Memory allocation of Array
    int n;
    cin >> n;
    int *arr = new int[n]; // each element would be 0 or garbage

    fun(arr,n);
    return 0;
}