//we debugged this code together
#include <iostream>
#include <cstring> //to use strcpy

using namespace std;

int main() {
    char name[10];
    char name2[10] = "MeiLi";

    //name = "MeiLi"; //can't do this
    strcpy(name, "MeiLi");

    return 0;
}