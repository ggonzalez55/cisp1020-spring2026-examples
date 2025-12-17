#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct DnDChar {
    string name;
    string race;
    string className; //class is a reserved word
    int stats[6];
    //STR,DEX,CON,INT,WIS,CHA
};

const int STR_IDX = 0;
const int DEX_IDX = 1;
const int CON_IDX = 2;
const int INT_IDX = 3;
const int WIS_IDX = 4;
const int CHA_IDX = 5;

void initChar(DnDChar& c, 
              const string name, 
              const string race, 
              const string className,
              const int c_str,
              const int c_dex, 
              const int c_con, 
              const int c_int, 
              const int c_wis, 
              const int c_cha);

string getName(const DnDChar& c);
string getRace(const DnDChar& c);
string getClassName(const DnDChar& c);

//individual stat getters
int getSTR(const DnDChar& c);
int getDEX(const DnDChar& c);
int getCON(const DnDChar& c);
int getINT(const DnDChar& c);
int getWIS(const DnDChar& c);
int getCHA(const DnDChar& c);

//file i/o functions
void writeChar(string filename, const DnDChar& c);

int main() {
    string filename;
    DnDChar john;
    initChar(john, "John of the Feline Warriors", 
        "Leshy", "Rogue", 12, 15, 13, 14, 15, 20);

    cout << "Enter a filename to write character to: ";
    cin >> filename;
    writeChar(filename, john);

    return 0;
}

string getName(const DnDChar& c) {
    return c.name;
}

string getRace(const DnDChar& c) {
    return c.race;
}

string getClassName(const DnDChar& c) {
    return c.className;
}

//individual stat getters
int getSTR(const DnDChar& c) {
    return c.stats[STR_IDX];
}

int getDEX(const DnDChar& c) {
    return c.stats[DEX_IDX]; 
}

int getCON(const DnDChar& c) {
    return c.stats[CON_IDX];
}

int getINT(const DnDChar& c) {
    return c.stats[INT_IDX];
}

int getWIS(const DnDChar& c) {
    return c.stats[WIS_IDX];
}

int getCHA(const DnDChar& c) {
    return c.stats[CHA_IDX];
}

void initChar(DnDChar& c, 
              const string name, 
              const string race, 
              const string className,
              const int c_str,
              const int c_dex, 
              const int c_con, 
              const int c_int, 
              const int c_wis, 
              const int c_cha) 
{
    c.name = name;
    c.race = race;
    c.className = className;
    c.stats[STR_IDX] = c_str;
    c.stats[DEX_IDX] = c_dex;
    c.stats[CON_IDX] = c_con;
    c.stats[INT_IDX] = c_int;
    c.stats[WIS_IDX] = c_wis;
    c.stats[CHA_IDX] = c_cha;

    cout << "Done initializing character!" << endl;
}

void writeChar(string filename, const DnDChar& c); {
    ofstream fout;
    fout.open(filename);

    fout << c.name << endl;
    fout << c.race << endl;
    fout << c.className << endl;
    fout << c.stats[STR_IDX] << " ";
    fout << c.stats[DEX_IDX] << " ";
    fout << c.stats[CON_IDX] << " ";
    fout << c.stats[INT_IDX] << " ";
    fout << c.stats[WIS_IDX] << " ";
    fout << c.stats[CHA_IDX] << endl;

    fout.close();
    cout << "Character sucessfully written to " << filename << endl;
}