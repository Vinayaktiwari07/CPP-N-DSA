#include<iostream>
using namespace std;
int main() {
    int a = 7;
    // create pointer
    int* ptr = &a;

    // access the value ptr is pointing to
    cout << "Address of a is: " << &a << endl;
    cout << "Value stored at ptr is: " << ptr << endl;
    cout << "Value ptr is pointing to is: " << *ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;



    // Pointer Declaration
    int* ptr;  // it  is a BAD PRACTICE.

    // Pointer initialize with zero.
    int* ptr1 = 0;  // It is a GOOD PRACTICE.
    int* ptr2 = nullptr;


    int a = 7;
    int* ptr = &a;
    // copy pointer
    int* dusraPtr = ptr;

    cout << *ptr << endl;
    cout << *dusraPtr << endl;

    return 0;
}