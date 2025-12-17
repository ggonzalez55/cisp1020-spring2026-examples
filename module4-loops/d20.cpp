/* Simulate rolling a d20. It's unfairly weighted and 
has a 6% chance of rolling a 20.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    double roll;
    double chance;
    char choice;
    int counter = 0;

    srand(time(0)); //seeding the random number generator;
    cout << "Roll the die? (Y/N): ";
    cin >> choice;
    
    while (choice != 'N') {
        chance = (double)rand()/RAND_MAX; //gives you a random number b/w 0.0 and 1.0
        if (chance <= 0.06) { //if I get 6%, roll 20 (yay)
            cout << "6% chance of 20." << endl;
            roll = 20;
        } else {
            cout << "regular roll between 1-19" << endl;
            roll = 1 + rand() % 19; //roll w/ even chance of 1-19
        }

        counter++;
        cout << "Number of times rolled: " << counter << endl;
        cout << "Roll: " << roll << endl;

        cout << "Roll the die? (N to quit): ";
        cin >> choice;
    }

    cout << "Goodbye!" << endl;

    return 0;
}