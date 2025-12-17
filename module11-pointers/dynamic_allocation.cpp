#include <iostream>
using namespace std;

int main() {
    int *p1 = new int; //allocate space for a new int
    *p1 = 7; //change the val p1 is pointing to to 7

    int *p2 = p1;

    *p2 =  42;

    int *p3 = new int;
    *p3 = 100;

    //print out the values that everything points to
    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << "*p3: " << *p3 << endl;

    //free up the memory
    delete p1;
    delete p3;

    return 0;
}