#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main() {
    int u_choice; //to store user's choice

    //generate the random number for the computer
    srand(time(0)); //seed the random number generator

    int c_choice = 1 + rand() % 3;

    //debugging
    //cout << "computer choice: " << c_choice << endl;

    //get user's choice
    cout << "Choose 1) Rock, 2) Paper, 3) Scissors: ";
    cin >> u_choice;

    //determine the winner by comparing the choices
    if(c_choice == 1 && u_choice == 3) {
        cout << "Rock crushes scissors." << endl;
    } 
    if(c_choice == 2 && u_choice == 1) {
        cout << "Paper covers rock." << endl;
    }
    if(c_choice == 3 && u_choice == 2) {
        cout << "Scissors cuts paper." << endl;
    }
    
    return 0;
}