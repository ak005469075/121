#include<iostream>
using namespace std;
int main()
{
    int i=2;
    float a[i],s=0;
    
    for (;i>=0;i--)
    {
        cin>>a[i];
       s=s+a[i];
    }
    
    cout<<s<<endl;
    cout<<s/3<<endl;
    cout<<int(s/3+0.5)<<endl;
    return 0; 
}