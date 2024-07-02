#include <iostream>
using namespace std;
class  MyClass{
static int counter;
int count;
public:
MyClass(){
    count++;
counter++;
}
static int getCounter(){
return counter;
}
int getCount(){
    return count;
}
};
int MyClass:: counter=0;
int main(){
MyClass obj1;
MyClass obj2;
MyClass obj3;
cout<<obj1.getCount()<<endl;
cout<<MyClass::getCounter()<<endl;

}
