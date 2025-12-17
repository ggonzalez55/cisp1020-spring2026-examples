#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 10, k;
    double x = 3.3, y = 6.6, z;

    // --- All k assignments with output ---
    k = a + b;
    cout << "k = a + b: " << k << endl;

    k = a - b;
    cout << "k = a - b: " << k << endl;

    k = a / b;
    cout << "k = a / b: " << k << endl;

    k = b / a;
    cout << "k = b / a: " << k << endl;

    k = a % b;
    cout << "k = a % b: " << k << endl;

    k = b % a;
    cout << "k = b % a: " << k << endl;

    cout << "------------------------------" << endl;

    // --- All z assignments with output ---
    z = a / b;
    cout << "z = a / b: " << z << endl;

    z = y / x;
    cout << "z = y / x: " << z << endl;

    z = x / a;
    cout << "z = x / a: " << z << endl;

    z = x / y;
    cout << "z = x / y: " << z << endl;

    z = y * b;
    cout << "z = y * b: " << z << endl;

    z = static_cast<double>(b) / a;
    cout << "z = static_cast<double>(b) / a: " << z << endl;

    z = y - a / b;
    cout << "z = y - a / b: " << z << endl;

    z = (y - a) / b;
    cout << "z = (y - a) / b: " << z << endl;

    z = y - static_cast<double>(a) / b;
    cout << "z = y - static_cast<double>(a) / b: " << z << endl;

    z = y - static_cast<double>(a / b);
    cout << "z = y - static_cast<double>(a / b): " << z << endl;

    return 0;
}
