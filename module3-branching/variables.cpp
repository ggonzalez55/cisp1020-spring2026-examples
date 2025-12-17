#include <iostream>

using namespace std;

int main() {
    int i = 4;
    double x = 11.1;

    cout << static_cast<double>(i) / 9 << endl;
    cout << i << endl;
    cout.setf(ios::showpoint);
    cout << static_cast<double>( i / 9 ) << endl;
    cout << i / static_cast<int>(x) << endl;

}