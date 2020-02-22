#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c,d,e;
    cin>>x;
    a=x/50;
    b=x%50/20;
    c=x%50%20/10;    
    d=x%50%20%10/5;
    e=x%50%20%10%5; 
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
    return 0;
}