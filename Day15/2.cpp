#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to create and write to a text file
void createFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not create text file." << endl;
        return;
    }
    outFile << "This is a text file.\nIt contains some sample text.\n";
    outFile.close();
}

// Function to read from a text file
void readFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open text file for reading." << endl;
        return;
    }
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

// Function to write binary data to a binary file
void writeBinaryFile(const string& filename, const char* data, size_t size) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "Error: Could not create binary file." << endl;
        return;
    }
    outFile.write(data, size);
    outFile.close();
}

// Function to read binary data from a binary file
void readBinaryFile(const string& filename, size_t size) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open binary file for reading." << endl;
        return;
    }
    char* buffer = new char[size];
    inFile.read(buffer, size);
    cout.write(buffer, size);
    cout << endl;
    delete[] buffer;
    inFile.close();
}

int main() {
    string textfile = "file.txt";
    string binaryfile = "binary.txt";

    // Create and read from the text file
    createFile(textfile);
    readFile(textfile);

    // Binary data to be written to the binary file
    const char binaryData[] = "This is binary data";
    writeBinaryFile(binaryfile, binaryData, sizeof(binaryData));
    readBinaryFile(binaryfile, sizeof(binaryData));

    return 0;
}
