/*Implement a program using the std::queue container to simulate a ticketing system. The program should:

Add customers to the queue.
Serve customers (remove from front of the queue).
Display the current queue.
Display the number of customers served.
*/
#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    queue<string>q;
    q.push("rishika");
    q.push("radha");
    q.push("ram");
    q.push("rohan");
    q.push("dipti");
    q.push("chetna");
   q.pop();
   
   while(!q.empty()){
    cout<<q.front()<< " ";
    q.pop();
   }
   
}