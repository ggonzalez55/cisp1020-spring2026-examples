#include <iostream>

using namespace std;

int main() {
    char choice;
    
    do {
        cout << "Enter a direction (Enter q or Q to exit): " << endl;
        cout << "1) N" << endl;
        cout << "2) S" << endl;
        cout << "3) E" << endl;
        cout << "4) W" << endl;
        cin >> choice;

        if(choice == 'N') {
            cout << "You freeze in the north pole." << endl;
        }
        if (choice == 'S') {
            cout << "Sunburn on the beach!" << endl;
        }
        if(choice == 'E') {
            cout << "You get lost in the mountains and see the sunrise ^_^" << endl;
        }
        if(choice == 'W') {
            cout << "You duel a gunslinger in the Wild West." << endl;
        }

    } while(choice != 'q' && choice != 'Q');

    return 0;
}