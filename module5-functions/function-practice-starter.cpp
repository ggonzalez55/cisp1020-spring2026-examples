#include <iostream>

using namespace std;

//function prototypes
double factorial(double n);
void sumAndAverage();
void powersOfTwo(double n);

int main() {
    int choice; //to hold user menu choice
    int n;
    double res;

    do {
        cout << "Choose an option: " << endl;
        cout << "1. Compute Factorial" << endl;
        cout << "2. Sum and Average" << endl;
        cout << "3. Powers of 2" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        //check if choice is outside of valid range
        if(choice < 1 && choice  > 4) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        switch(choice) {
            case 1:
                //call the factorial function
                cout << "Enter a number: "; //prompt for number
                cin >> n;
                res = factorial(n);
                cout << "Factorial of " << n << " is " << res;
                break;
            case 2:
                //call the sum and average function
                sumAndAverage();
                break;
            case 3:
                //call the powers of 2 function
                cout << "Enter n: ";
                cin >> n;
                powersOfTwo(n);
                break;
            case 4:
                //exit
                cout << "Goodbye!" << endl;
                break;
        }
    } while(choice != 4);

    return 0;
}

double factorial(double n) {
//todo fill this in later

}

void sumAndAverage() {
    double num;
    double sum; //to hold accumulated sum
    double avg;
    int count = 0; //to count how many numbers were entered

    cout << "Enter numbers (0 to stop): " << endl;
    do {
        cin >> num;
        count++;
        sum = num + sum;
    } while(num != 0);

    avg = sum/count;
    //Sum = 30, Average = 10
    cout << "Sum = " << sum << ", Average = " << avg << endl;
}

void powersOfTwo(double n) {
    //fill in
    //this will print out the result
}