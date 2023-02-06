//  Nevin Kuruvilla
//  Dr. Vermilyer
//
// A program that demonstrates the implementation of a class that controls the basic operations of a vending machine and a class for items.
//  Date: February 5, 2023


#include <iostream>
#include <string>
#include "Item.h"
#include "VendingMachine.h"
#include <map>

using namespace std;

    
class Item {
    public:
        Item() {}
        Item(string name, int quantity, float cost) : name(name), quantity(quantity), cost(cost) {}
        string getName() const { return name; }
        int getQuantity() const { return quantity; }
        float getCost() const { return cost; }
    public:
        string name;
        int quantity;
        float cost;
};

class VendingMachine {
    public:
        VendingMachine(string name) : name(name) {}
        void stockItem(Item item) {
            stock[item.getName()] = item;
        }
        bool selectItem(string name) {
            auto item = stock.find(name);
            if (item == stock.end()) {
                return false;
            }
            if (item->second.getQuantity() == 0) {
                cout << "Sincerest apologies, the item you have selected " << item->second.getName() << " is out of stock." << endl;
                return false;
           
            }
            cout << "You have selected " << item->second.getName() << " for $" << item->second.getCost() << endl;
            item->second.quantity--;
            return true;
            
        }
        string getName() const { return name; }
        void showItems() const {
            cout << "The following items are available at " << name << ":" << endl;
            for (const auto& item : stock) {
                cout << item.second.getName() << " for $" << item.second.getCost() << " (Quantity: " << item.second.getQuantity() << ")" << endl;
            }
        }
    public:
        string name;
        map<string, Item> stock;
};



int main() {
    {
        VendingMachine myMachine("Soda Machine");

        Item item1("coke", 32 , 1.50);
        myMachine.stockItem(item1);
        Item item2("pepsi", 1, 1.40);
        myMachine.stockItem(item2);

        string itemName;
        float money;
        do
        {
            cout << endl;
            myMachine.showItems();
            cout << "Enter the name of your selection: ";
            cin >> itemName;

            if (myMachine.selectItem(itemName)) {
                cout << "Enter your money: ";
                cin >> money;
            }
        }
        while (true);
    }
    
   

    return 0;
}
