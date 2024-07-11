/*Write a C++ program that appends the following line to a file named log.txt:
New log entry. */

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char arr[50];
    cin.getline(arr,50);
    ofstream appendFile("log.txt",ios::app);
    appendFile<<arr;
    appendFile.close();

}