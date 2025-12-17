/*7.	Write a C++ code segment that asks the user for a
choice on a multiple choice exam. Valid choices are 
A, B, C or D. If the user enters an invalid choice, 
scold them and make them try again. */

#include <iostream>

using namespace std;

int main() {

    bool valid = false;
    char choice;

    do {
        cout << "Enter a letter (A,B,C,D): ";
        cin >> choice;

        if(choice == 'A' || choice == 'B' || choice == 'C' || choice == 'D') {
            //if the choice is a valid letter
            valid = true;
        } else {
            cout << "Try again." << endl;
        }
    } while (!valid);

    return 0;
}