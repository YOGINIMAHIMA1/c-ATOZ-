#include <iostream>
#include <set>
using namespace std;
int main(){
    // to store unique elements
    set <int> s;
    s.insert(10);
    s.insert(3);
    s.insert(1);
    s.insert(7);
    s.insert(12);
    s.erase(1);
    cout<<s.count(6)<<endl;// as 6 is not present so it print 0
    cout<<s.count(3)<<endl;//as 3 is present so it print 1
    cout<<s.count(4)<<endl;
    cout<<s.count(1)<<endl;// 1 is erased
    cout<<s.count(12)<<endl;// 

}