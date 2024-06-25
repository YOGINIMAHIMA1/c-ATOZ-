
//**Constructor Overloading:**
  // Write a class `Complex` that represents complex numbers. Implement a default constructor that sets both real and imaginary parts to 0, and a parameterized constructor that takes two arguments to initialize the real and imaginary parts.
#include <iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imagenery;
    Complex(): real(0),imagenery(0){}
    Complex(int r, int i):real(r),imagenery(i){}
    void display(){
        cout<<real<<" "<<imagenery<<endl;;
    };
};
int main() {
   Complex Cno,Cno1;
//cout<<Cno.real<< " "<<Cno.imagenery<<endl;
Cno.display();
 Cno1.real=10,Cno1.imagenery=20;
// cout<<Cno1.real<<" "<<Cno1.imagenery<<endl;
Cno1.display();

    return 0;
}
