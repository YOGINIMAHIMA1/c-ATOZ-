#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, a;
    cin >> n;  // Read the number of elements

    stack<int> s1, s2;  // Two stacks: s1 for input, s2 for sorting
    for (int i = 0; i < n; i++) {
        cin >> a;  // Read each element
        s1.push(a);  // Push each element onto stack s1
    }

    // Sort elements using s2
    while (!s1.empty()) {
        int k = s1.top();  // Get the top element from s1
        s1.pop();  // Remove the top element from s1
        
        // Move elements from s2 back to s1 if they are smaller than k
        while (!s2.empty() && s2.top() < k) {
            s1.push(s2.top());
            s2.pop();
        }
        
        // Push k onto s2
        s2.push(k);
    }

    // Print the sorted elements
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;

    return 0;
}
