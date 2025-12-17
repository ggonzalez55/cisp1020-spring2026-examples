// show how to use sizeof to determine the 
// length of an array (but not particularly the
// number of elements in the array)

//sizeof() returns the number of bytes in the expression
//so if an int consists of 4 bytes, 
// then the size of any single element in the array, 
//(e.g. sizeof(arr[0]) will be 4.

//sizeof(arr) would be the size of 5 ints, 5 * 4 -> 20 bytes.
// 20 / 4 = 5, which is the length of the arrary called arr.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3 };
	
    // Finding the length of array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << n;
    return 0;
}