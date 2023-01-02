// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<7+2*3<<endl;// r to l
    cout<<7/2*3<<endl;//9 l to r
    cout<<7*3/2<<endl;//10// l to r
    cout<<8%4/2<<endl;//  l to r
    cout<<8/4%2<<endl;// l to r
    int a=100000;// -10^9 to 10^9
    int b=100000;
    int c= a*b;
    cout<<c<<endl;// 1410065408 overflow
    long v =100000;
    long  x=100000;
    long k=v*x;
    cout<<k<<endl;// now correct answer as range oflong is -10^12 to 10^12 and answer is 10^10 data is not overflown
    long long s=100000;
    long long f=100000;//range of long long  is -10^18 to 10^18
    long long j=s*f;
    cout<<j<<endl;// 10000000000
    int mx= INT_MAX;
    cout<<mx<<endl;
    
}
