#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct Employee {
	string name;
	string title;
	double salary;
};

void printEmployee(const Employee &e);
void readEmployee(ifstream &in, Employee &e);

int main() {
    //1 way: initialize when you declare
	Employee e = {"Wirt Wood","Field Surveyor", 60000};
    Employee temp;

    ifstream in;

    in.open("employees.dat");

    if(in.fail()) {
        cout << "File doesn't exist T_T" << endl;
    } else {
        readEmployee(in,temp);
    }
    in.close();

    printEmployee(temp);

    //or declare and initialize in separate steps
    /*
    Employee e;
	e.name = "Wirt Wood";
	e.title = "Field Surveyor";
	e.salary = 60000;
    */

    cout << e.name << endl;
    cout << e.title << endl;
    cout << e.salary << endl;

    printEmployee(e);
    return 0;
}

/*Name: Wirt Wood
Title: Field Surveyor
Salary: $60000.00*/

void printEmployee(const Employee &e) {
    cout << "Name: " << e.name << endl;
    cout << "Title: " << e.title << endl;
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Salary: $" << e.salary << endl;

}

void readEmployee(ifstream &in, Employee &e) {
    getline(in, e.name);
    in >> e.title;
    in >> e.salary;
}