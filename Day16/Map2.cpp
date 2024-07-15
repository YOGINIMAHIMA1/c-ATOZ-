  /* Develop a C++ program that allows users to enter and store contact details (name, phone number, email) in a map.
 The program should provide options for adding new contacts, searching for existing contacts,
  and displaying all stored contacts. */

  #include <iostream>
#include <map>
#include <string>

using namespace std;

// Define a structure to hold contact details
struct Contact {
    string phoneNumber;
    string email;
};

// Function declarations
void addContact(map<string, Contact>& contacts);
void searchContact(const map<string, Contact>& contacts);
void displayContacts(const map<string, Contact>& contacts);

int main() {
    map<string, Contact> contacts;
    int choice;

    do {
        cout << "\nContact Management System\n";
        cout << "1. Add new contact\n";
        cout << "2. Search for a contact\n";
        cout << "3. Display all contacts\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact(contacts);
                break;
            case 2:
                searchContact(contacts);
                break;
            case 3:
                displayContacts(contacts);
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void addContact(map<string, Contact>& contacts) {
    string name, phone, email;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone number: ";
    getline(cin, phone);
    cout << "Enter email: ";
    getline(cin, email);

    Contact newContact = {phone, email};
    contacts[name] = newContact;

    cout << "Contact added successfully.\n";
}

void searchContact(const map<string, Contact>& contacts) {
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);

    auto it = contacts.find(name);
    if (it != contacts.end()) {
        cout << "Name: " << it->first << "\n";
        cout << "Phone: " << it->second.phoneNumber << "\n";
        cout << "Email: " << it->second.email << "\n";
    } else {
        cout << "Contact not found.\n";
    }
}

void displayContacts(const map<string, Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts to display.\n";
    } else {
        for (const auto& entry : contacts) {
            cout << "Name: " << entry.first << "\n";
            cout << "Phone: " << entry.second.phoneNumber << "\n";
            cout << "Email: " << entry.second.email << "\n";
            cout << "---------------------------\n";
        }
    }
}
