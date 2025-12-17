#include <iostream>
#include <string>

using namespace std;

//function prototype
bool validateQty(int qty, int stock);
double calculateTotal(int qty, double price);

int main() {

    string item1 = "Boba";
    string item2 = "Coffee";

    int stock1 = 40;
    int stock2 = 100;

    double price1 = 2.50;
    double price2 = 1.00;

    int qty1;
    int qty2;

    cout << "Enter boba quanitity to buy (stock: " << stock1 << "): ";
    cin >> qty1;

    if (validateQty(qty1,stock1)) {
        stock1 = stock1 - qty1;
    }

    cout << "New stock for boba: " << stock1 << endl;
    
    //rinse and repeat for the coffee
    cout << "Enter coffee quanitity to buy (stock: " << stock2 << "): ";
    cin >> qty2;

    if (validateQty(qty2,stock2)) {
        stock2 = stock2 - qty2;
    }

    cout << "New stock for coffee: " << stock2 << endl;

    double bobaCost = calculateTotal(qty1,price1);
    double coffeeCost = calculateTotal(qty2,price2);
    double totalCost = bobaCost + coffeeCost;

    cout << "Total cost for boba: " << bobaCost << endl;
    cout << "Total cost for coffee: " << coffeeCost << endl;
    cout << "Total for everything: " << totalCost << endl;

    return 0;
}

//function definition
/*Description: function that determines whether or not the quanity bought is valid.
Parameters:
 qty - quantity of product to buy
 stock - number of items currently in stock
 Returns true if qty is valid.
 Returns false if qty is negative or exceeds stock.
*/
bool validateQty(int qty, int stock) {
    //check if the quantity is negative or over the amount stocked
    if(qty < 0) {
        cout << "Invalid number." << endl;
        return false;
    }
    if(qty > stock) {
        cout << "Exceeds amount in inventory." << endl;
        return false;
    }

    cout << "Quantity is valid." << endl;
    return true;
}

//calculate final total for a specific item
double calculateTotal(int qty, double price) {
    return qty * price;
}