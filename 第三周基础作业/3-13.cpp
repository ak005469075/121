//基础作业13,求非负整数各位数字的和，如输入1234，输出10
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int i=0,s=0,c,k=10;
   int n;
   cin>>n;
 for(;i<=10;i++)
 {
    c=pow(k,i);
    s=s+(n/c)%10;
 }
  cout<<s<<endl;
  return 0;
}