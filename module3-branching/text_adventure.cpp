#include <iostream>

using namespace std;

int main() {
    char choice;

    cout << "Pick a direction (N, S, E, W): ";
    cin >> choice;
    
    //optionally, uppercase the user input and only check uppercase letters
    //choice = toupper(choice);

    if(choice == 'N' || choice == 'n') {
        cout << "You arrive in a polar region blanketed with snow. You make the biggest snowman known to man." << endl;
    } else if (choice == 'S' || choice == 's') {
        cout << "You are attacked by a mob of kangaroos. The joey gets the last blow." << endl;
    } else if (choice == 'E' || choice == 'e') {
        cout << "You take a dip in the ocean with a hippocampus!" << endl;
    } else if(choice == 'W' || choice == 'w') {
        cout << "You melt into a puddle in California." << endl;
    }

    return 0;
}