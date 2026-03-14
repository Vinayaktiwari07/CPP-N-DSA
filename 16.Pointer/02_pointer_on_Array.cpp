#include<iostream>
using namespace std;
int main() {
    int arr[4] = {12,44,66,88};
    // cout << arr << endl; // ye arr ka base address print krega
    // cout << arr[0] << endl;  // ye 1st index value ko print krega.
    // cout << &arr << endl; // ye arr ke base address ko print krega.
    // cout << &arr[0] << endl; // ye 1st index ka address print krega jo ki base address hi hai.

    // int* p = arr; // pointer p me arr ka base address store hoga
    // cout << p << endl; // ye arr ke base address ko print krega jo upar me store kiya.
    // cout << &p << endl; // ye pointer ke address ko print krega.

    cout << *arr << endl; // ye arrey ke base address pr jo bhi pda hoga us value ko print krega.
    cout << *arr + 1 << endl; // ye base address pr jo value pda hoga usko 1 se increment kr dega.
    cout << *(arr) + 1 << endl; // ye base address pr jo value pda hoga usko 1 se increment kr dega.
    cout << *(arr + 1) << endl; // ye (base address + 1) vale position pr jo pda hoga usko print krega.
    cout << *(arr + 2) << endl;  // ye (base address + 2) vale position pr jo pda hoga usko print krega.
    

    return 0;
}