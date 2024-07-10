#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q3;
    q3.push(4);
    q3.push(4);
    q3.push(5);
    q3.push(6);
    q3.pop();
    while(!q3.empty()){
        cout<<q3.front()<<" ";
        cout<<endl;
        cout<<q3.back()<<" ";
        q3.pop();
    }

}