#include <iostream>

using namespace std;

int main() {
    double temp;

    //prompt the user to enter a temperature
    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "temp: " << temp << endl;

    //print the right message based off of the temperature
    if(temp < 40) {
        //if the temp is less than 40, print wraith
        cout << "It's a wraith!" << endl;
    } else if(temp == 60) {
        //if the temp is equal to 60, print hantu
        cout << "It's a hantu!" << endl;
    } else if (temp > 72){
        //if the temp is greater than 72, print ghoul!
        cout << "It's a ghoul!" << endl;
    }

    return 0;
}