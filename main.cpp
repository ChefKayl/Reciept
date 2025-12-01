#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantity;
    double unitPrice;
    string itemName;
    
    cout << "Enter the item: ";
    cin >> itemName;
    
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    cout << "Enter the price: ";
    cin >> unitPrice;
    
    double totalCost = quantity * unitPrice;
    
    cout << "\nRECEIPT\n";
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price:$" << unitPrice << endl;
    cout << "totalCost: " << totalCost << endl;
    cout << "====================";
    
    return 0;
}
