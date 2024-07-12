#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Item {
    string name;
    float price;
    int quantity;
};

void addItem() {
    Item item;
    cout << "Enter item name: ";
    cin >> item.name;
    cout << "Enter item price: ";
    cin >> item.price;
    cout << "Enter item quantity: ";
    cin >> item.quantity;

    ofstream outFile("inventory.dat", ios::binary | ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    outFile.write(reinterpret_cast<char*>(&item), sizeof(Item));
    outFile.close();
    cout << "Item added successfully!" << endl;
}

void displayItems() {
    ifstream inFile("inventory.dat", ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    Item item;
    while (inFile.read(reinterpret_cast<char*>(&item), sizeof(Item))) {
        cout << "Name: " << item.name << ", Price: " << item.price << ", Quantity: " << item.quantity << endl;
    }
    inFile.close();
}

void updateQuantity() {
    string itemName;
    int newQuantity;
    cout << "Enter item name to update quantity: ";
    cin >> itemName;
    cout << "Enter new quantity: ";
    cin >> newQuantity;

    fstream file("inventory.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    Item item;
    while (file.read(reinterpret_cast<char*>(&item), sizeof(Item))) {
        if (item.name == itemName) {
            item.quantity = newQuantity;
            file.seekp(-static_cast<int>(sizeof(Item)), ios::cur);
            file.write(reinterpret_cast<char*>(&item), sizeof(Item));
            cout << "Quantity updated successfully!" << endl;
            file.close();
            return;
        }
    }
    file.close();
    cout << "Item not found." << endl;
}

int main() {
    int choice;
    do {
        cout << "1. Add Item" << endl;
        cout << "2. Display Items" << endl;
        cout << "3. Update Quantity" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                updateQuantity();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
