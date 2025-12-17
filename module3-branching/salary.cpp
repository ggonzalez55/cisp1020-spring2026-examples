#include <iostream>

using namespace std;

int main() {
    double salary;
    double rate = 7.50;
    double hours;

    cout << "How many hours did you work? ";
    cin >> hours;

    cout.precision(2); //set # of digits after . to be 2
    cout.setf(ios::fixed); //don't display in scientific notation
    //cout.setf(ios::showpoint); //show the decimal point

    if(hours < 0) {
        cout << "Number of hours needs to be equal or greater than 0." << endl;
        return 0;
    } else {
        if(hours <= 40) {
            cout << "You worked regular amount of hours ^_^" << endl;
            salary = hours * rate;
        } else {
            cout << "You worked overtime." << endl;
            salary = 40*rate + (hours - 40)*rate*1.5;
        }
    }

    cout << "Your calculated salary: $" << salary << endl;

    return 0;
}