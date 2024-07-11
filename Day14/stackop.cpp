/*Problem 4: Stack Operations
Description:
Write a program using the std::stack container to evaluate a postfix expression. The program should:

Read a postfix expression.
Use a stack to evaluate the expression.
Display the result of the evaluation.
*/


#include <iostream>
#include <stack>
#include <string>
#include <math.h>
using namespace std;

    int PostfixExpression(string s){
         stack<int>st;
         for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                st.push(s[i]-'0');
            }
            else{
                int op2=st.top();
                st.pop();
                int op1= st.top();
                st.pop();

                switch(s[i]){
                    case '+' :
                    st.push(op1+op2);
                    break;
                    case '-' :
                    st.push(op1-op2);
                    break;
                    case '*' :
                    st.push(op1*op2);
                    break;
                    case '/' :
                    st.push(op1/op2);
                    break;
                    case '^' :
                    st.push(pow(op1,op2));
                    break;

                }
            }
         }
        return st.top();
    }
    int main(){
        cout<<PostfixExpression("46+2/5*7+");
    }
