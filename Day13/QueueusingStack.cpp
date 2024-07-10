#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s1.empty() && s2.empty()) {
            cout << "Error: Queue is empty" << endl;
            return -1;
        }
        
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int topValue = s2.top();
        s2.pop();
        return topValue;
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    q.push(2);
    q.push(9);
    q.push(4);
    q.push(6);

    cout << q.pop() << endl;  // Should print 2
    q.push(6);
    cout << q.pop() << endl;  // Should print 9
    cout << q.pop() << endl;  // Should print 4
    cout << q.pop() << endl;  // Should print 6
    cout << q.pop() << endl;  // Should print 6 or Error if already popped

    return 0;
}
