#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;

    // Dequeue all elements into stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Enqueue all elements from stack back to queue (now in reverse order)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;

    // Pushing elements into the queue
    q.push(2);
    q.push(3);
    q.push(6);
    q.push(34);
    q.push(1);

    // Reverse the queue
    reverseQueue(q);

    // Print the reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
