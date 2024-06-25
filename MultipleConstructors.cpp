 #include <iostream>
   #include <string>
   using namespace std;
   
   class Book{
       public:
       string title;
       int noofpages;
       //default Constructor
       Book(): title("Unknown"), noofpages(0) {}
       //parameterized Constructor
       Book(string t, int p):title(t), noofpages(p){}
       
   };
   
   int main(){
       Book B;
       cout<<B.title<<" "<<B.noofpages<<endl;
       Book B1("OpenMind",22);
       cout<<B1.title<<" "<<B1.noofpages<<endl;
   }
