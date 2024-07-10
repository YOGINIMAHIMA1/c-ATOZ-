#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void revfunc(queue<int>&q){  // function definition
    stack<int>s; // stack declare
    while(!q.empty()){    // check queue is empty or not
        s.push(q.front());// add queue element in stack
        q.pop();// queue element  delete
    }
    while(!s.empty()){ // check stack is empty or not
        q.push(s.top());// now again stack element added to queue
        s.pop();// now stack is empty
    }
}

int main(){
    queue<int>q;// queue declaration
    q.push(22); //queue intialization
    q.push(23);
    q.push(35);
    q.push(56);
   
    revfunc(q);// pass queue in reverse function
    while(!q.empty()){ // check is empty or not
        cout<<q.front()<<" ";// print queue
        q.pop(); //delete all element
    }
}