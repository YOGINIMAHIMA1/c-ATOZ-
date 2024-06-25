#include <iostream>
using namespace std;


class Animal{
    public:
    void eat(){
        cout<<"eat the animal :"<<endl;
    }
};
class Dog: public Animal{
    public:
    void  bark(){
        cout<<" The Dog is barking:"<<endl;
    }
    
};
int main(){
    Dog myDog;
    myDog.eat();
    myDog.bark();
    return 0;
}
