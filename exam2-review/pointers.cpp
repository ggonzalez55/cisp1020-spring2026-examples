#include <iostream>
using namespace std;

void mysteryFunction(int *x) {
    *x = *x / 2;
    cout << "Inside function: " << *x << endl;
}

int main() {
    int i = 100;

    cout << "Before function: " << i << endl;

    mysteryFunction(&i);

    cout << "After function: " << i << endl;

    return 0;
}

