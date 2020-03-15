#include<iostream>
using namespace std;
int s(int x)
{
    int i=1;
    int s=1;
    if(x>0)
    for(i=1;i<=x;i++)
    s*=i;
    if(x==0)
    s=1;
    return s;

}
int main()
{
    int n;
    cin>>n;
    cout<<s(n)<<endl;
    return 0;
}