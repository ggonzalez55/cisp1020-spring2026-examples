#include <iostream>

using namespace std;

int main() {
    double salary;
    double rate = 7.50;
    double hours;

    cout.precision(2); //set # of digits after . to be 2
    cout.setf(ios::fixed); //don't display in scientific notation
    //cout.setf(ios::showpoint); //show the decimal point

    cout << "How many hours did you work? (0 to exit)";
    cin >> hours;

    for( ;hours > 0;) {
        if(hours <= 40) {
            cout << "You worked regular amount of hours ^_^" << endl;
            salary = hours * rate;
        } else {
            cout << "You worked overtime." << endl;
            salary = 40*rate + (hours - 40)*rate*1.5;
        }

        cout << "Your calculated salary: $" << salary << endl;

        cout << "How many hours did you work? (0 to exit)";
        cin >> hours;
    }

    return 0;
}