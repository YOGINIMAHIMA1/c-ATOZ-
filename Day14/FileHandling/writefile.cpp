/*Write a C++ program that writes the following lines to a file named output.txt:
Hello, world!
This is a test file.
*/




#include <iostream>
#include <fstream>
using namespace std;
int main(){
        char arr[100];
        char arr1[100];
         cin.getline(arr,100);
         cin.getline(arr1,100);
       ofstream Writefile("output.txt");
      Writefile<<arr<<endl<<arr1;
      Writefile.close();

}
   



