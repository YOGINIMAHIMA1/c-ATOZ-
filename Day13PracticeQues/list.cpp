#include <iostream>
#include <list>
using namespace std;
int main(){
    int l1[]={12,23,45,67};
    list<int>l(l1,l1+4);
    auto it=l.begin();
    for(auto it:l){
        cout<<it;

    }
}