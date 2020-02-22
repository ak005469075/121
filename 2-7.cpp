#include<iostream>
using namespace std;
int main()
{
    int i=6;
    double s=0;
    int a[i]; 
    for(;i>=0;i--)
    {
      cin>>a[i];
      s+=a[i]; 
    }  
     cout<<int(s/7+0.5)<<endl;
     return 0;
}