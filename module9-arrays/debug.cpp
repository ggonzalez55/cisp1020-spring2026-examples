//we debugged this code together
#include <iostream>

using namespace std;

int main() {
	int num;
	int a[10];
	cout << "How many numbers? (max of 10)" << endl;
	cin >> num;

	//check if the number is valid before filling the array
	if(num < 1 || num > 10) {
		return 0;
	}	

	//make this loop run the correct number of times
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i << endl;
		cin >> a[i];
	}

	return 0;
}
