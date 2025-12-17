#include <iostream>

using namespace std;

void multByTwo(int *j);

int main() {
    int i = 6;

    multByTwo(&i);
    cout << "After function call: " << i << endl;

    return 0;
}

void multByTwo(int *j) {
    *j = *j * 2;
}