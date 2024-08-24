#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output the result
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;

    return 0;
}

