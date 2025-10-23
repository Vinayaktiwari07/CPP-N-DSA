// Converting Kilometer To Miles.

#include <iostream>
using namespace std;

void kmToMile(int n){
    float mile = n *  0.621371;
    cout << n << " Kilometer = " << mile <<" Miles." << endl;

}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    
    kmToMile(n); // Now we're passing n to a function that accepts it properly

    return 0;
}