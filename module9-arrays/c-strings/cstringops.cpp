#include <iostream>
#include <cstring> //to use strcat and other cstring functions

using namespace std;

//function to determine whether or not a char is a vowel
bool isvowel(char c);

int main() {
    char w1[20];
    char w2[20];
    char fullname[50] = "";

    cout << "Enter a first name: ";
    cin >> w1;

    cout << "Enter another last name: ";
    cin >> w2;

    strcat(fullname,w1); //append w1 to the end of fullname
    strcat(fullname,w2); //append w2 to the end of fullname

    cout << "Full name: " << fullname << endl;

    cout << "the number of characters in first name: " << strlen(w1) << endl;

    for(int i=0; i < strlen(w1); i++) {
        cout << w1[i] << endl;
    }

    //check w2 if it contains any numbers
    for(int i = 0;i<strlen(w2);i++) {
        if(isdigit(w2[i])) {
            cout << w2[i] << " is a digit." << endl;
        } else {
            cout << w2[i] << " is not a digit." << endl;
        }
    }
  
    char new_w1[20] =""; //initialize to empty string

    //construct a new string by replacing all vowels with z in w1
    for(int i = 0;i<strlen(w1);i++) {
        if(isvowel(w1[i])) {
            new_w1[i] = 'z';
        } else {
            new_w1[i] = w1[i];
        }
    }

    w1[strlen(w1)] = '\0';

    cout << "New w1: " << new_w1 << endl;

    return 0;
}

bool isvowel(char c) {
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
        return true;
    }
    return false;
}

