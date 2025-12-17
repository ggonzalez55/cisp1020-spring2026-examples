#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string reverse;

    cout << "Enter a word: ";
    cin >> s;

    //loop thru the word backwards
    for (int i=s.length()-1; i >= 0; i--) {
        //add the current letter from original string
        //to the end of the reverse string
        reverse = reverse + s[i];
    }

    if(s == reverse) {
        cout << s << " is a palindrome" << endl;
    } else {
        cout << s << " is not a palindrome" << endl;
    }

    return 0;
}