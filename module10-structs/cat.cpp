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

int main() {
    Cat myCat;
    Cat yourCat = {"Francisco Jose", 8, true};
    Cat theirCat;

    myCat.name = "Gonzo";
    myCat.age = 11;
    myCat.isFixed = true;

    printCat(myCat);
    printCat(yourCat);

    //set theirCat's name to be Mango
    setName(theirCat, "Mango");
    setAge(theirCat, -1);
    setAge(theirCat, 5);
    setIsFixed(theirCat, false);

    printCat(theirCat);

    string n = getName(myCat);
    cout << "Name of my cat: " << n << endl;
    int a = getAge(theirCat);
    cout << "Age of their cat: " << a << endl;
    bool f = getIsFixed(yourCat);
    if(f) {
        cout << "Your cat is fixed!" << endl;
    } else {
        cout << "Your cat is not fixed." << endl;
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