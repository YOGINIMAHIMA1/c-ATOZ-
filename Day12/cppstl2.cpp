 
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
 
 
 pair<int,int>p={12,23};
    cout<<p.first<<" "<<p.second<<endl;
    p.first=45;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>p1={22,"cpp world"};
    cout<<p1.first<<" "<<p1.second<<endl;

// pair intialization
pair<int,int>p2[7];
p2[0]={12,23}  ,p2[1]={32,24},p2[2]={77,35},p2[3]={90,34},p2[4]={12,11}, p2[5]={49,30},p2[6]={34,56};


sort(p2,p2+7);
for(auto i:p2){
    cout<<"("<<i.first<<" "<<i.second<<") ";
}
cout<<endl;






 }