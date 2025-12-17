#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string reverse; //to hold the reversed input string

    cout << "Enter a word: ";
    cin >> input;

    for(int i = input.length()-1; i >= 0; i--) {
        reverse = reverse + input[i];
        cout << "reverse string is currently: " << reverse << endl;
    }

    //check if the reverse is the same as the original input
    if(reverse == input) {
        cout << input << " is a palindrome!" << endl;
    } else {
        cout << input << " is NOT a palindrome :(" << endl;
    }

}