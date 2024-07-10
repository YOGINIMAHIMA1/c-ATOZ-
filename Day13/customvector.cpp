#include <iostream>
using namespace std;
template <typename T>
class vector{
    private:
    T* arr;
    int s;
    int c;
    public:
    vector v(){
        s=c=0;
    }
    vector v(num){
        s=c=10;
        int * arr= new int [num]  ;
        arr=new T[num];
        
          }
          void new_allocation(){
            T* temp=new T[s+5];
            c=s+5;

          }
          void push_back(){
            if(s==c){
                new_allocation();
            }
          }




}