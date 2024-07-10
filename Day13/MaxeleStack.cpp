#include <iostream>
#include <stack>
using namespace std;

class MaxStack {
    stack<int> st;
    stack<int> maxSt;

public:
    // Push element onto the stack
    void push(int x) {
        st.push(x);
        if (maxSt.empty() || x >= maxSt.top()) {
            maxSt.push(x);
        }
    }

    // Pop element from the stack
    void pop() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        if (st.top() == maxSt.top()) {
            maxSt.pop();
        }
        st.pop();
    }

    // Retrieve the top element of the stack
    int top() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st.top();
    }

    // Check if the stack is empty
    bool empty() {
        return st.empty();
    }

    // Retrieve the maximum element in the stack
    int getMax() {
        if (maxSt.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return maxSt.top();
    }
};

int main() {
    MaxStack st;
    st.push(23);
    st.push(21);
    st.push(45);
    st.push(46);
    st.push(12);

    cout << st.getMax() << endl; // Should print 46

    st.pop();
    cout  << st.getMax() <<" "<< endl; // Should print 46

    st.pop();
    cout << st.getMax() << endl; // Should print 45

    while (!st.empty()) {
        cout << st.top() << st.getMax() << endl;
        st.pop();
    }

    return 0;
}
