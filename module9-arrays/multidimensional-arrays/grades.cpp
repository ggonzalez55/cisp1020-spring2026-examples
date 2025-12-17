#include <iostream>

using namespace std;

const int MAX_STUDENTS = 5;
const int NUM_TESTS = 3;

//function prototype
void printGrades(double a[][NUM_TESTS]);
void calcAverages(double a[][NUM_TESTS], double avg[]);

int main() {
    //declare 2D array
    double grades[MAX_STUDENTS][NUM_TESTS] = {
        {89.3, 98.9,67.5},
        {45.8, 67.8, 88.8},
        {77.5, 82.0, 91.2},
        {60.0,73.5,85.0},
        {100.0,100.0,100.0},
    };

    //1D parallel array to hold averages
    double testAverages[MAX_STUDENTS] = {0};

    //one way to initialize 2D array values
    //grades[0][0] = 89.3;
    //grades[0][1] = 98.8;
    //grades[0][2] = 67.5;

    //print each grade
    printGrades(grades);

    //populate the testAverages array
    calcAverages(grades, testAverages);
    
    //print the test average for each student
    for(int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Test average for student " << i+1 << ": "
             << testAverages[i] << endl;
    }

    return 0;
}

void printGrades(double a[][NUM_TESTS]) {
//loop over each row
    for(int j = 0; j < MAX_STUDENTS;j++) {
        //loop over each column
        cout << "Grades for student " << j + 1 << ": ";
        for(int i=0;i<NUM_TESTS;i++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

//pre-condition: avg already exists
//post-condition: avg is populated with test averages
void calcAverages(double a[][NUM_TESTS], double avg[]) {
    double sum;
    //loop over each row in grades
    for(int r = 0; r < MAX_STUDENTS; r++) {
        sum = 0; //initialize sum for new student
        //accumulate test grades for 1 student
        for(int c = 0; c < NUM_TESTS;c++) {
            sum += a[r][c];
        }
        //calc average for that student,
        //store the result in corresponding
        //slot in averages array
        avg[r] = sum/NUM_TESTS;
    }
}