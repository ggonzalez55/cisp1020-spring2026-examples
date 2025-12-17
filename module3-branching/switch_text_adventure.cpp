/*  File: switch_text_adventure.cpp
    Author: MeiLi Charles
    Description: Text adventure game using a switch statement.
*/
#include <iostream>

using namespace std;

int main() {
    char choice;

    //prompt user to pick a direction
    cout << "Pick a direction (N, S, E, W): ";
    cin >> choice;

    //convert user input to uppercase
    //choice = toupper(choice);

    switch(choice) {
        case 'N':
            cout << "You arrive in a polar region blanketed with snow. ";
            cout << "You make the biggest snowman known to man." << endl;
            break;
        case 'S':
            cout << "You are attacked by a mob of kangaroos. ";
            cout << "The joey gets the last blow." << endl;
            break;
        case 'E':
            cout << "You take a dip in the ocean with a hippocampus!" << endl;
            break;
        case 'W':
            cout << "You melt into a puddle in California." << endl;
            break;
    }

    return 0;
}