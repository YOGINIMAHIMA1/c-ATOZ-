//Write a C++ program that copies the content of a file named source.txt to another file named destination.txt.

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char arr[50];
    ifstream readData("output.txt");
    ofstream writeData("copy.txt");
    while(readData.get(arr,50)){
        writeData.put(arr);
    }
    readData.close();
    writeData.close();

}
