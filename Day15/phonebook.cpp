#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

void addContact() {
    Contact contact;
    cout << "Enter contact name: ";
    cin >> contact.name;
    cout << "Enter phone number: ";
    cin >> contact.phone;

    ofstream outFile("phonebook.txt", ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    outFile << contact.name << " " << contact.phone << endl;
    outFile.close();
    cout << "Contact added successfully!" << endl;
}

void searchContact() {
    string searchName;
    cout << "Enter contact name to search: ";
    cin >> searchName;

    ifstream inFile("phonebook.txt");
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    string name, phone;
    bool found = false;
    while (inFile >> name >> phone) {
        if (name == searchName) {
            cout << "Name: " << name << ", Phone: " << phone << endl;
            found = true;
            break;
        }
    }
    inFile.close();
    if (!found) {
        cout << "Contact with name " << searchName << " not found." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                searchContact();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
