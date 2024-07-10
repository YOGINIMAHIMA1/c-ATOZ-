#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void revStack(stack<int>&st){
    queue<int>q;
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }

    }


int main(){
    stack <int>st;
    st.push(23);
    st.push(32);
    st.push(21);
    st.push(56);
    st.push(26);
    revStack(st);
    while(!st.empty()){
       cout<< st.top()<<" ";
       st.pop();
    }
}