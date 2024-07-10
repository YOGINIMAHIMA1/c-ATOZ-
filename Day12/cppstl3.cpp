#include <bits/stdc++.h>
using namespace std;

int main()
{
//Iterators
vector<int>v={10,23,45,67,89};
//vector<int>:: iterator it= v.begin();  rather than doing this just do
auto it= v.begin();
cout<<*it << " "<<endl;
it++;
cout<<*it<<" "<<endl;
it++;
cout<<*it<<" "<<endl;
it--;
cout<<*it<<" "<<endl;


}