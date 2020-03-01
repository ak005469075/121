//基础作业3
#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
   if(a>0&&b>0)
   cout<<1;
   if(a>0&&b<0)
   cout<<4;
   if(a<0&&b>0)
   cout<<2;
   if(a<0&&b<0)
   cout<<3;
   return 0;
}