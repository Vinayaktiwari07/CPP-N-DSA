// Function for Area of Circle.

#include<iostream>
using namespace std;

int areaOfCircle(int n){
    // cin >> n;
    float area = 3.14 * n * n;
    return area;
}

int main(){
    float  aOfC = areaOfCircle(10);
    cout << "Area of Circle is: " << aOfC << endl;

    return 0;
}