/* Problem 1: List Operations
Description:
Write a program that uses the std::list container to manage a collection of integers. Your program should perform the following operations:

Insert elements at the front and back of the list.
Remove elements from the front and back of the list.
Sort the list in ascending and descending order.
Reverse the list.
Display the elements of the list.
*/


#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>l;
    //push at front
    l.push_front(22);
    l.push_front(12);
    l.push_front(10);
    l.push_front(34);
    l.push_front(45);
    l.push_front(23);
    //push at back
    l.push_back(13);
    l.push_back(11);
    l.push_back(2);

    //remove from front
    l.pop_front();
    l.pop_front();
    // remove from back
    l.pop_back();
    l.pop_back();
    auto it= l.begin();
    for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;
    // sort in ascending order
    l.sort();
    for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;
//reverse the list
    l.reverse();
     for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;

}