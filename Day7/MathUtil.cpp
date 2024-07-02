
/*Math Utility Class:
Design a class named MathUtil. Include static methods for basic mathematical operations:

add(int a, int b): Adds two integers.
subtract(int a, int b): Subtracts two integers.
multiply(int a, int b): Multiplies two integers.
divide(int a, int b) (optional): Divides two integers with error handling for division by zero. In your main function, prompt the user for two numbers and an operation (+, -, *, or /). Use the corresponding static method from the MathUtil class to perform the calculation and display the result.
*/#include <iostream>
using namespace std;

class MathUtil{
    public:
    static int  add(int a, int b){
        return a+b;
}
static int subtract(int a, int b){
    return a-b;
}
static int multiply(int a, int b){
    return a*b;
}
static int divide(int a , int b){
    return a/b;
}
};
int main(){
    int a,b,res;
    char op;
    cin>>a>>b;
    cin>>op;
    switch(op){
        case '+' :
        res= MathUtil::add(a,b) ;
         cout<< res<<endl;
        break;
        case '-':
        res=MathUtil::subtract(a,b);
        cout<<res<<endl;
        break;
        case '*':
         res=MathUtil::multiply(a,b);
        cout<<res<<endl;
        break;
        case '/':
        res=      MathUtil::divide(a,b);
        cout<<res<<endl;
        break;
        
    }
    
}
