#include <iostream>
#include <fstream>
using namespace std;

class A {
public:
    struct stu {
        char name[20];
        int rollno;
    } s;

    void put_data();
    void get_data();
};

void A::put_data() {
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter rollno: ";
    cin >> s.rollno;

    fstream file;
    file.open("read.txt", ios::out | ios::app | ios::binary);
    if (!file) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }
    file.write(reinterpret_cast<char*>(&s), sizeof(s));
    file.close();
}

void A::get_data() {
    int temp;
    cout << "Enter rollno to search: ";
    cin >> temp;

    fstream file;
    file.open("read.txt", ios::in | ios::binary);
    if (!file) {
        cerr << "Error: Could not open file for reading." << endl;
        return;
    }

    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        if (temp == s.rollno) {
            cout << "Name: " << s.name << endl;
            cout << "Roll No: " << s.rollno << endl;
            file.close();
            return;
        }
    }
    cout << "Record not found." << endl;
    file.close();
}

int main() {
    A st;
    int choice;
    do {
        cout << "1. Enter Data" << endl;
        cout << "2. Get Data" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                st.put_data();
                break;
            case 2:
                st.get_data();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
