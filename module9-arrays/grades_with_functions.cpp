#include <iostream>
using namespace std;

// declare a const to indicate the 
// maximum number of grades to store
const int MAX_GRADES = 5;

//function that takes a grade and adds 5 bonus points
double add_bonus(double g);

//function that returns the average of an array with n elements
double calc_average(double g[], int n);

int main() {
    
	double grades[MAX_GRADES];
	double tests[3] = { 70.8, 84.1, 100 };
	double input;
	
	//fill up the array with grades from the user
	for(int i=0; i < MAX_GRADES; i++) {
		cout << "Enter a grade: ";
		cin >> input;
		grades[i] = input;
	}
	
	//add bonus points to the 3rd grade
	grades[2] = add_bonus(grades[2]);
	
	double avg = calc_average(grades, MAX_GRADES);
	cout << "The average of all grades is: " << avg << endl;
	
	double test_avg = calc_average(tests, 3);
	cout << "The average of all test grades is: " << test_avg << endl;
	
	//print out each element in the array
    for(int i=0; i < MAX_GRADES ;i++) {
		cout << grades[i] << endl;
	}
    
    return 0;
}

double add_bonus(double g) {
	return g + 5;
}

//function that returns the average of an array with n elements
double calc_average(double g[], int n) {
	double sum = 0;
	
	//loop over each element in the array, adding as we go
    for(int i=0; i < n ;i++) {
		sum += g[i];
	}
	
	double avg = sum/n;
	
	return avg;
}