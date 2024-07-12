#include <iostream>
#include <fstream>
using namespace std;

void copyImage(const string& source, const string& destination) {
    ifstream srcFile(source, ios::binary);
    if (!srcFile) {
        cerr << "Error: Could not open source file." << endl;
        return;
    }
    ofstream destFile(destination, ios::binary);
    if (!destFile) {
        cerr << "Error: Could not open destination file." << endl;
        return;
    }

    destFile << srcFile.rdbuf();

    srcFile.close();
    destFile.close();
    cout << "Image copied successfully!" << endl;
}

int main() {
    string source = "source.jpg";
    string destination = "destination.jpg";
    copyImage(source, destination);
    return 0;
}
