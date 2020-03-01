//基础作业12,判断非负整数的位数
#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
   while (1)
   {
      n=n/10;
      i++;
      if(n==0)
      {
          break;
      }
   }
   cout<<i<<endl;
   return 0;  
}