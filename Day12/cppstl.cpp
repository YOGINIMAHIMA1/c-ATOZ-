#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={12,23};
    cout<<p.first<<" "<<p.second<<endl;
    p.first=45;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>p1={22,"cpp world"};
    cout<<p1.first<<" "<<p1.second<<endl;
   // vector
   // vector
   vector<int>v1={22,33,45,66,12,1,2,5};
   
   sort(v1.begin(),v1.end());
   for(auto i:v1){
    cout<<i<<" ";  //1 2 5 12 22 33 45 66
   }
cout<<endl;
   reverse(v1.rbegin(),v1.rend());
   for(auto i:v1){
    cout<<i<<" ";//66 45 33 22 12 5 2 1
   }
   cout<<endl;
    sort(v1.rbegin(),v1.rend());
   for(auto i:v1){
    cout<<i<<" ";
}
}