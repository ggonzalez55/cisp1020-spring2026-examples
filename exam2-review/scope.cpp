#include <iostream>
using namespace std;

int g = 10;

void funcA(int x) {
    int a = 5;
    //m is not accessible here
    //cout << m << endl;
    cout << "In funcA" << endl;
}

void funcB() {
    int b = 20;
    cout << "In funcB" << endl;
}

int main() {
    int m = 3;

    funcA(m);
    funcB();

    return 0;
}
