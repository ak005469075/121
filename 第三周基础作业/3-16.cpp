//基础作业16，Fibonacci序列
#include<iostream>
using namespace std;
int main()
{
  int n,i=0,a1,a2=-1,a3=1;
  cin>>n;
      for(;i<=n;i++)
      {
           a1=a2;
           a2=a3;
           a3=a1+a2;
          if(i==n)
          {
               cout<<a3;
          }
          else
          {
               cout<<a3<<" ";
          }
      }  
 return 0;
    }
