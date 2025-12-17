#include <iostream>

using namespace std;

int main() {
    double x = 99090.076024810;
    cout << x << endl;
    cout.setf( ios::fixed);
    cout.precision(0);
    cout << x << endl;

    x = 1.0;
    cout << x << endl;
    cout.setf(ios::showpoint);
    cout << x << endl; // prints 1.
 
    return 0;
}



