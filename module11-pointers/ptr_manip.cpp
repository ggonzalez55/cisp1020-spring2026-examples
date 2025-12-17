#include <iostream>

using namespace std;

int main() {
    int i;
    int *iPtr;

    i = 6;
    iPtr = &i; //make iPtr point to i

    cout << "i: " << i << endl;
    cout << "&i: " << &i << endl;
    cout << "*iPtr: " << *iPtr << endl;
    cout << "iPtr:" << iPtr << endl;
    return 0;
}