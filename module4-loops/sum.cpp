/*  File: sum.cpp
    Author: MeiLi
    Description: Ask the user to repeatedly enter a number. If 
    they enter 0, then print out the sum of all the previous numbers.
*/
#include <iostream>

using namespace std;

int main() {
    double num; //number that gets entered by user
    double sum = 0;
    double count = 0;

    cout << "Enter a number (0 to print sum): ";
    cin >> num;
    count++;
    //cout << "current count: " << count << endl;

    while (num != 0 ) {
        count++;
        sum += num;
        cout << "Enter a number (0 to print sum): ";
        cin >> num;
        //cout << "current count: " << count << endl;
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum/count << endl;

    return 0;
}