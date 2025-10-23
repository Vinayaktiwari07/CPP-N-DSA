// Converting Fahrenheit into Celsius.

#include <iostream>
using namespace std;

void FahrenToCels(float n){
    float celcius = (n - 32) * 5.0 / 9.0;
    cout << n << " Fahrenheit(°F) = " << celcius << " Celsius(°C)" << endl;

}

int main() {
    float n;
    cout << "Enter the Temperature: ";
    cin >> n;
    
    FahrenToCels(n); // Now we're passing n to a function that accepts it properly

    return 0;
}