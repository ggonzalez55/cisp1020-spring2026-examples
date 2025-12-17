#include <iostream>
#include <string>

using namespace std;

int main() {
    //inputs
    int x;
    int y;
    //to hold the results
    int sum;
    int difference;
    int product;
    double quotient;
    double remainder;

    //ask user to enter the 2 numbers
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;
    
    //add the #s
    sum = x + y;
    difference = x-y;
    product = x*y;
    quotient = x/y;
    remainder = x % y;

    //print the result
    cout << "Result of addition: " << sum << endl;
    cout << "Result of subtraction: " << difference << endl;
    cout << "Result of multiplication: " << product << endl;
    cout << "Result of division: " << quotient << endl;
    cout << "Result of modulus: " << remainder << endl;
    
    return 0;
}
