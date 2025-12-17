#include <iostream>
using namespace std;

// declare a const to indicate the 
// maximum number of grades to store
const int MAX_GRADES = 5;

int main() {
    
	double grades[MAX_GRADES];
	double input;
	
	//fill up the array with grades from the user
	for(int i=0; i < MAX_GRADES; i++) {
		cout << "Enter a grade: ";
		cin >> input;
		grades[i] = input;
	}
	
	//calculate the average of all grades in the array
	double sum = 0;
	
    for(int i=0; i < MAX_GRADES ;i++) {
		sum += grades[i];
	}
	
	double avg = sum/MAX_GRADES;
	cout << "The average of all grades is: " << avg << endl;
	
	//print out each element in the array
    for(int i=0; i < MAX_GRADES ;i++) {
		cout << grades[i] << endl;
	}
    

    return 0;
}