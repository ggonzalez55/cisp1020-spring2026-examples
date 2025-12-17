#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    string filename;
    int num;
    
    cout << "Enter the file name to read from: ";
    cin >> filename;

    input.open(filename);

    if(input.fail()) {
        cout << "Input file " << filename << " open failed." << endl;
        return 0;
    }

    //check if the file is empty
    char c;
    input.get(c);

    if(input.eof()) {
        cout << "Input file " << filename << " is empty." << endl;
        return 0;
    }

    input.putback(c);

    output.open("output_nums.dat");

    while( input >> num ) {
        output << "The number is: " << num << endl;
    }

    input.close();
    output.close();
    return 0;
}
