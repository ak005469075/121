//基础作业
#include<iostream>
using namespace std;
int main()
{
    double n,s=0;
    cin>>n;
    int i=1;
  /*  while(i<=n)
    {
        s=s+1.0/i;
        i++;
    }
    cout<<s<<endl;*/
    for(;i<=n;i++)
    {
        s=s+1.0/i;
    }
    cout<<s<<endl;
    return 0;
}