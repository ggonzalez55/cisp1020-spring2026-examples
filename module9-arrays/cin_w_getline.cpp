#include <iostream>

using namespace std;

int main() {
    char name[81]; // so, can hold 80 letters in a name
    int age;

    cout << "Enter age: ";
    cin >> age;    // Skips initial white space. Reads digits until white space. 
    cout << "Enter name: ";
    cin.get(); //consume the newline left in the input buffer
    cin.getline( name, 81 );

    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    return 0;
}