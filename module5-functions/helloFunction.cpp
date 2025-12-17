#include <iostream>

using namespace std;

//function prototype
void printHi();
double addNums(double x, double y);

int main() {
    //call the printHi function
    printHi();

    //call addNums
    double res1 = addNums(7,5);
    double res2 = addNums(6,4);

    cout << res1 << endl;
    cout << res2 << endl;
    
    return 0;
}

//function definition
void printHi() {
    cout << "Hi! ^_^" << endl;
}

double addNums(double x, double y) {
    double res = x + y;
    return res;
}