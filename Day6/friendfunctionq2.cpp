#include <iostream>
using namespace std;



class A {
private:
  int a;
  public b:
  A() { a=0;}
  friend  class B;
  
};

class B {
private:
    int b;

public:
  void showB(A& x) {
    cout << x.b << endl;
}

    


int main() {
    A a;  // Creating an object of A class
    B x;  // Creating an object of B class
    b.showA(a);  // Calling showB function to print the value of b

    return 0;
}
