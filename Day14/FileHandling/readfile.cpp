// Write a C++ program that reads a text file named input.txt and prints its content to the console
#include <iostream>
#include <fstream>
using namespace std;
int main(){

    char arr[100];
    cin.getline(arr,100);
    ofstream createData("file1.txt");
    createData<<arr;
    cout<<"reading file:"<<endl;
ifstream myfile("file1.txt");

cout<<"filedata readed sucessfully"<<endl;
myfile.getline(arr,100);
}