#include <iostream>
#include <cstring>

using namespace std;

//bubble sort a 2d array of chars
void bubbleSort(char l[][50], int n);
void printWords(char a[][50]);

int main() {
    //stores 5 c-strings, up to 49 chars and null char '\0'
    char words[5][50];

    for(int i=0;i<5;i++) {
        cout <<"Enter a word: ";
        //get from user 50 chars and store that into 
        //first row of words array
        cin.getline(words[i],50);
        cout << "You entered: " << words[i] << endl;
    }

    //sort the words array
    bubbleSort(words,5);

    //print out the sorted array
    printWords(words);

    return 0;
}


// l is the array to sort using bubble sort algorithm
// n is the number of elements in the array
// pre condition: l at least has 1 valid element
// post condition: the array l will be sorted
void bubbleSort(char l[][50], int n) {
    bool swapped;
    char temp[50];

    //bubble sort in ascending order
    do {
        swapped = false;
        for(int i=0;i<n-1;i++) {
            if(strcmp(l[i], l[i+1]) > 0) {
                //swap the element's positions
                //assign l[i+1] into temp
                strcpy(temp,l[i+1]);
                strcpy(l[i+1],l[i]);
                strcpy(l[i],temp);
                swapped = true;
            }
        }
    } while (swapped);
}

void printWords(char a[][50]) {
//loop over each row
    for(int j = 0; j < 5 ;j++) {
        cout << a[j] << endl;
    }
}
