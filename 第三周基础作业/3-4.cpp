//基础作业4
#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='0'&&c<='9')
       cout<<0<<endl;
         else
    { 
    if(c>='a'&&c<='z')
         cout<<2<<endl;
         else 
    {
    if(c>='A'&&c<='Z')  
          cout<<1<<endl;
          else 
       {cout<<-1<<endl;}
    }
    }
    return 0;  
}
