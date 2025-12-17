#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double miles;
    double gallons;
    double mpg;

    //Prompt the user for miles
    cout << "Enter miles: ";
    //Read miles
    cin >> miles;

    //if miles < 0
    if(miles < 0) {
        //Print an error message
        cout << "Miles shold be greater than 0. Do better >:(" << endl;
    } else {
 
        //Prompt the user for gallons
        cout << "Enter gallons: ";
        //Read gallons
        cin >> gallons;
        //if  gallons <= 0 
        if(gallons <= 0) {
            //Print error message
            cout << "Gallons should be greater 0. Get me a coffee." << endl;
        } else {
            //mpg = miles/gallons
            mpg = miles/gallons;
            //Print mpg
            cout << "Miles per gallon: "<< mpg << endl;
            cout << "Rounded: " << round(mpg) << endl;
        }
    }
    return 0;
}