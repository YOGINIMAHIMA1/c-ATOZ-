#include <iostream>
#include <fstream>
using namespace std;
int main(){
     char arr[100];
    // cout<<"name and age is :";
    // cin.getline(arr,100);
     ofstream myfile("file.txt");// ofstream ek data type hai aur myfile ek variable
     //myfile.open("file.txt");
     ifstream myfile1("file.txt");
     myfile<<arr;// insert arr data into myfile it will add data to file.txt
     cout<<"file write operation performed successfully";
     myfile.close();// file will close
     



     // to read file
     ifstream myfile("file.txt");
}