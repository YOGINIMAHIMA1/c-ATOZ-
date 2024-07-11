/*Problem 2: Vector Manipulation
Description:
Create a program that uses the std::vector container to store a collection of floating-point numbers. 
The program should:

Add elements to the vector.
Remove elements from a specified position.
Find the maximum and minimum elements in the vector.
Calculate the average of the elements.
Display the elements of the vector.
*/



#include <iostream>
#include <vector>
#include <algorithm> // *max_element, *min_element
#include <numeric>  // accumulate
using namespace std;
int main(){
    vector<float>v={12.3,2.4,22.7,34.6,56.2,6.4};
    int n= v.size();
    auto it=v.begin();
    v.insert(it,2.4);
    v.insert(it+2,3,5.6);
    v.insert(it+5,7.3);
    v.insert(it+7,6);
  for(auto i:v){
    cout<<i<<" ";
  }
 
  cout<<endl;
   cout<<"\nMax Element = " <<*max_element(v.begin(),v.end());
   cout << "\nMin Element = "
         << *min_element(v.begin(), v.end())<<endl;
         
 
         // avg

         float sum= accumulate(v.begin(),v.end(),0.0);
         float avg= sum/n;
          cout<<avg<<endl;
         for(auto i:v){
            cout<<i<<" ";
  }

}