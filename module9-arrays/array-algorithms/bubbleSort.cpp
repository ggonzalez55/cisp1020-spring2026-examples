#include <iostream>

using namespace std;

//function prototypes
void printArray(int l[], int n);
void bubbleSort(int l[], int n);

int main() {
    const int LIST_LENGTH = 5;
    int list[LIST_LENGTH] = {5, 9, 2, 10, 0};
    int anotherList[3] = {-1, 40, 22};

    cout <<"Unsorted list: " << endl;
    printArray(list,LIST_LENGTH);
    cout << endl;
    cout <<"Unsorted anotherList: " << endl;
    printArray(anotherList,3);
    cout << endl;

    bubbleSort(list, LIST_LENGTH);
    bubbleSort(anotherList, 3);

    cout <<"Sorted list: " << endl;
    printArray(list,LIST_LENGTH);
    cout << endl;
    cout <<"Sorted anotherList: " << endl;
    printArray(anotherList,3);
    cout << endl;

    return 0;
}

//print an array
// l is the array to print
// n is the number of elements in the array
void printArray(int l[], int n) {
     for (int i = 0; i < n;i++) {
        cout << l[i] << " ";
    }
}

// l is the array to sort using bubble sort algorithm
// n is the number of elements in the array
// pre condition: l at least has 1 valid element
// post condition: the array l will be sorted
void bubbleSort(int l[], int n) {
    bool swapped;
    int temp;

    //bubble sort in ascending order
    do {
        swapped = false;
        for(int i=0;i<n-1;i++) {
            if(l[i] > l[i+1]) {
                //swap the element's positions
                temp = l[i+1];
                l[i+1] = l[i];
                l[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}