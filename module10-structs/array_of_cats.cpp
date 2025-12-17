#include <iostream>

using namespace std;

//define the Cat struct type
struct Cat
{
    string name;
    int age;
    bool isFixed;
};


//print details about a cat-
//const because it shouldn't modify the cat
//pass by ref for efficiency
void printCat(const Cat& c);

//setters
void setName(Cat& c, string n);
void setAge(Cat& c, int a);
void setIsFixed(Cat& c, bool f);

//getters
string getName(const Cat& c);
int getAge(const Cat& c);
bool getIsFixed(const Cat& c);

//set all 3 fields at once
void initCat(Cat& c, string n, int a, bool f);

int main() {
    //declare array the can hold 3 Cats
    Cat list[3];

    list[0].name = "Gonzo";
    list[0].age = 11;
    list[0].isFixed = true;

    initCat(list[1], "Bagel", 3, true);
    initCat(list[2], "Garfield", 46, true);
    
    //print out each cat in the array
    for(int i=0; i<3;i++) {
        printCat(list[i]);
    }

    return 0;
}

//prints details about Cat c
void printCat(const Cat& c) {
    cout << "Name: " << c.name << endl;
    cout << "Age: " << c.age << endl;
    cout << "Is fixed: ";
    if (c.isFixed) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

void setName(Cat& c, string n) {
    c.name = n;
}

void setAge(Cat& c, int a) {
    //check first if the age is valid
    if(a >= 0) {
        c.age = a;
    } else {
        cout << "CAN'T BE NEGATIVE!! >:(" << endl;
    }
}

void setIsFixed(Cat& c, bool f) {
    c.isFixed = f;
}

string getName(const Cat& c) {
    return c.name;
}

int getAge(const Cat& c) {
    return c.age;
}

bool getIsFixed(const Cat& c) {
    return c.isFixed;
}

//pre-condiditon: Cat c has to already be declared
//post-condition: Cat c will have initialized values
//based on the rest of the arguments
void initCat(Cat& c, string n, int a, bool f) {
    c.name = n; //set cat's name
    //check first if the age is valid
    if(a >= 0) {
        c.age = a; //set age
    } else {
        //otherwise chastise them
        cout << "CAN'T BE NEGATIVE!! >:(" << endl;
    }
    c.isFixed = f; //setting fixed status
}