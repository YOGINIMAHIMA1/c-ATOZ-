#include <iostream>
using namespace std;
template <class X> void fun(X a){
    cout<<a<<endl;
}
template <class X, class Y> void fun(X b, Y c)
{
    cout<<b<<" "<<c<<endl;
}
int main() {
   fun(10);
   fun(20,30);

    return 0;
}
