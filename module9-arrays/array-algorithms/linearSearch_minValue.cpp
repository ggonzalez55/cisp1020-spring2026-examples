#include <iostream>

using namespace std;

//function prototype
int linearSearch(int a[], int k);
int minValue(int a[]);

int main() {
     //declare array that can hold 6 ints
     //and initialize it at the same time
    int list[6] = {9, 10, 0};

    int result = linearSearch(list,30);
    if(result == -1) {
        cout << "The key was not found in the array." << endl;
    } else {
        cout << "The key was found at index " 
             << result << endl;
    }

    //get the minimum value in the list
    int minVal = minValue(list);
    cout << "The minimum value in the list is: " << minVal << endl;

    return 0;
}

// uses linear search algorithm to search for 
// element k inside of array a.
int linearSearch(int a[], int k) {
    for(int i = 0; i <= 5 ;i++) {
        if(a[i] == k) {
            return i;
        }
    }
    //if we get to this point, we know
    // k is not in the array
    return -1;
}

//return smallest element in array a
int minValue(int a[]) {
    int currMin = a[0];
    //check every element in the array
    for(int i = 0; i <= 5 ;i++) {
        if(currMin > a[i]) {
            currMin = a[i];
        }
    }
    return currMin;
}

