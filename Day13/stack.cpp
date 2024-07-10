#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int>st;
    st.push(3);
    st.push(2);
    st.push(4);
    st.push(9);
    st.push(3);
    st.pop();
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
  
    st.push(22);
    while(!st.empty())
    {
    cout<<st.top();
     st.pop();

    }
    

}