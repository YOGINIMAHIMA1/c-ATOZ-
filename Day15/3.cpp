/*63File Handling Practice Problems
This set of problems will help you practice the concepts of file handling in C++ covered in the provided code.

Text Files:

Student Records: Create a program that allows users to enter student information (name, ID, marks) 
and store them in a text file. The program should allow users to:

Add new student records.
Display all student records from the file.
Search for a specific student by ID and display their details.
Phonebook: Develop a program that functions as a simple phonebook. Users can:

Add new contacts (name, phone number) to the file.
Search for a contact by name and display their phone number.
File Encryption/Decryption (Optional): Implement a program that encrypts/decrypts a text file using a simple Caesar cipher or another basic encryption method.

Binary Files:

Image Copy: Write a program that copies the contents of an image file (e.g., JPG, PNG) to a new file. Ensure you handle binary data correctly.

Inventory Management: Develop a program that manages a store inventory. Users can:

Add new items (name, price, quantity) to a binary file.
Display all items from the inventory.
Update the quantity of an existing item.
High Score Tracking (Optional): Create a program that keeps track of high scores for a game. Users can:

Save a new high score to a binary file.
Display the current high score.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    float marks;
};

void addStudent() {
    Student student;
    cout << "Enter student name: ";
    cin >> student.name;
    cout << "Enter student ID: ";
    cin >> student.id;
    cout << "Enter student marks: ";
    cin >> student.marks;

    ofstream outFile("students.txt", ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    outFile << student.name << " " << student.id << " " << student.marks << endl;
    outFile.close();
    cout << "Student record added successfully!" << endl;
}

void displayStudents() {
    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    string name;
    int id;
    float marks;
    while (inFile >> name >> id >> marks) {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
    inFile.close();
}

void searchStudent() {
    int searchID;
    cout << "Enter student ID to search: ";
    cin >> searchID;

    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return;
    }
    string name;
    int id;
    float marks;
    bool found = false;
    while (inFile >> name >> id >> marks) {
        if (id == searchID) {
            cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
            found = true;
            break;
        }
    }
    inFile.close();
    if (!found) {
        cout << "Student with ID " << searchID << " not found." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
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
