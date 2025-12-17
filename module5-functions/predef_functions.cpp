#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numerator;
    double denominator;
    double res;
    double x = 5;
    double y = 3;

    numerator = sqrt(fabs(x-y)) + pow(x,6.9);
    denominator = sin(x) - cos(y);

    res = numerator/denominator;

    //or just do it all in one go
    //res = (sqrt(fabs(x-y)) + pow(x,6.9)) / (sin(x) - cos(y))
    
    cout << "res: " << res << endl;

    return 0;
}