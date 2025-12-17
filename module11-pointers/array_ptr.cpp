#include <iostream>

using namespace std;

void printArray(int *a, int n);
int main() {
    int nums[5] = {10, 20, 30, 40, 50};

    printArray(nums,5);
    return 0;
}

void printArray(int *a, int n) {
    for(int i=0; i<n;i++) {
        cout << a[i] << endl;
    }
}