#include <iostream>
using namespace std;

int main() {
	//declare an array that can hold 5 doubles
    double grades[5];
    
	//assign individual elements in the array values
    grades[0] = 70.1;
    grades[1] = 90.5;
    grades[2] = 0;
    grades[3] = 85.9;
    grades[4] = 100;
    
	//print each element in the array
    for(int i=0; i < 5 ;i++) {
		cout << grades[i] << endl;
	}
    
    return 0;
}