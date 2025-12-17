#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many elements: ";
    cin >> n;

    int *a = new int[n];
    a[0] = 99;
    a[1] = 100;
    
    cout << "a[0]: " << a[0] << endl;
    cout << "a[1]: " << a[1] << endl;

    delete [ ] a;
    a = NULL;

    return 0;
}